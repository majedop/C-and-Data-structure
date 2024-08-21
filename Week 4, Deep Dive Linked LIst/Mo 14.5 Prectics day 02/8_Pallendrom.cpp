#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prv;
};

class Doubly_linked_list
{
public:
  Node *head;
  int sz;

  Doubly_linked_list()
  {
    head = NULL;
    sz = 0;
  }

  // New Node Creating
  Node *Creat_node(int value)
  {
    Node *new_node = new Node;
    new_node->data = value;
    new_node->prv = NULL;
    new_node->next = NULL;

    return new_node;
  }

  // Insert at head
  void Insert_at_head(int value)
  {
    sz++;
    Node *newNode = Creat_node(value);

    if (head == NULL)
    {
      head = newNode;
      return;
    }
    Node *a = head;
    newNode->next = a;
    a->prv = newNode;
    head = newNode;
  }

  void Insert_at_any_position(int index, int value)
  {
    if (index > sz)
    {
      cout << index << " index does't exist."
           << "\n";
      return;
    }
    if (index == 0)
    {
      Insert_at_head(value);
      return;
    }
    sz++;
    Node *a = head;
    int cur_index = 0;
    while (cur_index != index - 1)
    {
      a = a->next;
      cur_index++;
    }

    Node *newNode = Creat_node(value);
    Node *b = a->next;

    newNode->prv = a;
    newNode->next = b;
    a->next = newNode;
    b->prv = newNode;
  }

  // Print all data in the node
  void Print_all()
  {
    Node *a = head;
    while (a != NULL)
    {
      cout << a->data << " ";
      a = a->next;
    }
    cout << "\n";
  }

  /// GetSize of doubly liked list
  void getSize()
  {
    cout << sz << "\n";
  }

  void palindrome()
  {
    Node *b = head;
    int cur_index = 0;
    while (cur_index != sz)
    {
      b = b->next;
      cur_index++;
    }
    Node *a = head;
    while (a && b != NULL)
    {
      if (a->data != b->data)
      {
        cout << "False" << "\n";
        return;
      }
      a = a->next;
      b = a->prv;
    }
    cout << "True" << "\n";
    return;
  }
};
int main()
{
  Doubly_linked_list dl;
  dl.Insert_at_head(1);
  dl.Insert_at_head(2);
  dl.Insert_at_head(3);
  dl.Insert_at_head(2);
  dl.Insert_at_head(1);
  dl.Print_all();
  dl.getSize();

  dl.palindrome();

      return 0;
}