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

  void Inserting_front(int value)
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

  void Sorting_linked_list()
  {
    Node *a = head;

    while (a != NULL)
    {
      for (int i = 0; i < sz; i++)
      {
        if (a->data > a->next->data)
        {
          Node *b = a->next;
          a->next = b->next;
          b->next = a->next;
        }
      }

      a = a->next;
    }
  }
};

int main()
{
  Linked_list l;

  l.Inserting_front(3);
  l.Inserting_front(4);
  l.Inserting_front(1);
  l.Inserting_front(5);
  l.Inserting_front(2);

  l.Print_all();
  l.Sorting_linked_list();
  l.Print_all();

  return 0;
}