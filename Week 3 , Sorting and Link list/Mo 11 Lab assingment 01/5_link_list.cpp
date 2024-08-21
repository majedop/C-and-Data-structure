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
  Linked_list()
  {
    head = NULL;
  }
  Node *Creat_Node(int value)
  {
    Node *New_node = new Node;
    New_node->data = value;
    New_node->next = NULL;
    return New_node;
  }

  void InsertAtHead(int value)
  {
    Node *New_node = Creat_Node(value);

    if (head == NULL)
    {
      head = New_node;
      return;
    }
    New_node->next = head;
    head = New_node;
  }

  int getSize()
  {
    Node *a = head;
    int size = 0;
    while (a != NULL)
    {
      size++;
      a = a->next;
    }
    return size;
  }

  int getValue(int value)
  {
    Node *a = head;
    int index = 0;
    while (a != NULL)
    {
      if (index == value)
        return a->data;

      index++;
      a = a->next;
    }
    return -1;
  }

  void Traverse()
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
  Linked_list l;
  cout << l.getSize() << "\n";
  l.InsertAtHead(5);
  cout << l.getSize() << "\n";
  l.InsertAtHead(6);
  l.InsertAtHead(30);
  cout << l.getSize() << "\n";
  l.InsertAtHead(20);
  l.InsertAtHead(30);

  cout << l.getValue(2) << "\n";

  cout << l.getValue(6) << "\n";

  // l.printReverse();
  l.Traverse();
  // l.swapFirst();
  l.Traverse();
  // l.printReverse(); 

  return 0;
}