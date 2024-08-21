#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;
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

  Node *Creat_node(int value)
  {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
  }

  void Insert_at_head(int value)
  {
    sz++;
    Node *new_node = Creat_node(value);
    if (head == NULL)
    {
      head = new_node;
      return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
  }

  void deleteZero()
  {
    Node *a = head;
    while (a != NULL)
    {
      if (a->data != 0)
      {
        cout << a->data << " ";
      }
      a = a->next;
    }
    cout << "\n";
  }
  void reverse(int i, int j)
  {
    Node *a = head;
    int cur_index_i = 0;
    while (cur_index_i != sz - 1)
    {
      a = a->next;
      cur_index_i++;
    }
    Node *b = head;
    while (b != NULL)
    {
      swap(b->next, b->prev);
      b = b->prev;
    }
    head = a;
  }

  void print_all()
  {
    Node *a = head;
    while (a != NULL)
    {
      cout << a->data << " ";
      a = a->next;
    }
    cout << "\n";
  }
};

int main()
{
  Doubly_linked_list dl;
  dl.Insert_at_head(3);
  dl.Insert_at_head(7);
  dl.Insert_at_head(6);
  dl.Insert_at_head(4);
  dl.Insert_at_head(2);
  dl.print_all();
  // dl.deleteZero();
  dl.reverse(1, 4);
  dl.print_all();

  return 0;
}