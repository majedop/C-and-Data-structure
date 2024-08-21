#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
class Linked_list
{
public:
  Node *head;
  int sz;

  Linked_list()
  {
    head = NULL;
    sz = 0;
  }
  Node *Creat_node(int value)
  {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
  }

  void Inserting_at_head(int value)
  {
    sz++;
    Node *neww = Creat_node(value);
    if (head == NULL)
    {
      head = neww;
      return;
    }
    neww->next = head;
    head = neww;
  }

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

  // head delelte;
  void delete_at_head()
  {
    if (head == NULL)
      return;

    sz--;
    Node *a = head;
    head = a->next;
    delete a;
  }

  // delete_last_elemnet
  void delete_last_element()
  {
    sz--;
    Node *a = head;
    while (a != NULL)
    {
      Node *b = a->next;
      if (b->next == NULL)
      {
        a->next = b->next;
        delete b;
      }
      a = a->next;
    }
  }

  // Linked list size
  void getSize()
  {
    cout << sz << "\n";
  }

  // Searcing i-th element
  void searching_ith_element(int value)
  {
    if (value > sz)
    {
      cout << "The index not exiet"
           << "\n";
      return;
    }
    Node *a = head;
    int index = 0;
    while (a != NULL)
    {
      if (index == value)
      {
        cout << value << "th element is " << a->data << " ";
        break;
      }
      a = a->next;
      index++;
    }
  }

  // Inserting last index;
  void Inserting_at_last(int value)
  {
    if (head == NULL)
    {
      Inserting_at_head(value);
      return;
    }
    Node *a = head;
    while (a->next != NULL)
    {
      a = a->next;
    }
    Node *new_node = Creat_node(value);
    a->next = new_node;
  }
  
  //searching given element
  void searching(int value)
  {
    Node *a = head;
    while (a != NULL)
    {
      if (a->data == value)
      {
        cout << "True"<<" ";
        return;
      }
      a = a->next;
    }
    cout << "False" <<" ";
  }
};

int main()
{
  Linked_list l;
  l.Inserting_at_head(5);
  l.Inserting_at_head(4);
  l.Inserting_at_head(3);
  l.Inserting_at_head(2);
  l.Inserting_at_head(1);

  l.Traversing();
   l.getSize();
   l.delete_last_element();
   l.Traversing();
   l.getSize();
   l.searching_ith_element(4);
  l.Traversing();
  l.Inserting_at_last(0);
  l.Traversing();
  l.searching(3);

  return 0;
}