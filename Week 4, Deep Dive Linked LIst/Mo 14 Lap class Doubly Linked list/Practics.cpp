#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *prv;
  Node *next;
};

class Doubly_Linked_list
{
public:
  Node *head;
  int sz;

  Doubly_Linked_list()
  {
    head = NULL;
    sz = 0;
  }

  // Node Creat function
  Node *Creat_node(int value)
  {

    Node *newNode = new Node;
    newNode->data = value;
    newNode->prv = NULL;
    newNode->next = NULL;

    return newNode;
  }

  // Value Insert At head
  void Insert_At_Head(int value)
  {
    sz++;
    Node *new_node = Creat_node(value);
    if (head == NULL)
    {
      head = new_node;
      return;
    }

    Node *a = head;
    new_node->next = a;
    a->prv = new_node;
    head = new_node;
  }

  // Insert at any index and any postition
  void Insert_at_any_index(int index, int value)
  {
    sz++;
    if (index > sz)
    {
      cout << index << " does't exits"
           << " ";
    }
    if (index == 0)
    {
      Insert_At_Head(value); // fuction call
      return;
    }

    Node *a = head;
    int cur_index = 0;
    while (cur_index != index - 1)
    {
      a = a->next;
      cur_index++;
    }
    Node *new_node = Creat_node(value);
    new_node->next = a->next;
    new_node->prv = a;

    Node *b = a->next;
    a->next = new_node;
    b->prv = new_node;
  }

  // delete any index 
  void delete_at_any_index(int index)
  {
    if (index >= sz)
    {
      cout << index << " does't exist."
           << " ";
    }
    Node *a = head;
    int cur_index = 0;
    while (cur_index != index)
    {
      a = a->next;
      cur_index++;
    }

    Node *b = a->prv;
    Node *c = a->next;

    if (b != NULL)
    {
      b->next = c;
    }
    if (c != NULL)
    {
      c->prv = b;
    }
    delete a;

    if (index == 0)
      head = c;

    sz--;
  }
 
 // Linked list reverse
  void reverse()
  {
    Node *a = head;
    int cur_intdex = 0;
    while (cur_intdex != sz - 1)
    {
      a = a->next;
      cur_intdex++;
    }
    Node *b = head;
    while (b != NULL)
    {
      swap(b->next, b->prv);

      b = b->prv;
    }
    head = a;
  }
 
 // Traversing
  void Traversing()
  {
    Node *a = head;
    while (a != NULL)
    {
      cout << a->data << " ";
      a = a->next;
    }
    cout << "\n";
  }
 
 //Size Function
  void getSize()
  {
    cout << sz << "\n";
  }
};

int main()
{
  Doubly_Linked_list dl;
  dl.Insert_At_Head(50);
  dl.Insert_At_Head(40);
  dl.Insert_At_Head(20);

  dl.Traversing();
  dl.Insert_at_any_index(2, 100);
  dl.Traversing();
  dl.reverse();
  dl.Traversing();

  return 0;
}