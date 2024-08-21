#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *next;
  Node *prv;
  Node(int val)
  {
    value = val;
    next = NULL;
    prv = NULL;
  }
};
class LinkedList
{
public:
  Node *head;
  Node *tail;
  int sz;
  LinkedList()
  {
    head = NULL;
    tail = NULL;
    sz = 0;
  }

  // Insert new node in head
  void insertHead(int value)
  {
    sz++;
    Node *newNode = new Node(value);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    head->prv = newNode;
    newNode->next = head;
    head = newNode;
  }

  // Insert new node in tail / end
  void insertTail(int value)
  {
    sz++;
    Node *newNode = new Node(value);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    tail->next = newNode;
    newNode->prv = tail;
    tail = newNode;
  }
  // Insert new node in mid
  void insertMid(int value)
  {
    sz++;
    Node *newNode = new Node(value);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    Node *a = head;
    int mid = sz / 2;
    int cur_idx = 1;
    while (cur_idx != mid)
    {
      a = a->next;
      cur_idx++;
    }
    Node *b = a->next;

    a->next = newNode;
    b->prv = newNode;
    newNode->prv = a;
    newNode->next = b;
  }
  int getSize()
  {
    return sz;
  }
  
  // Merge a and b
  void Merge(LinkedList a)
  {
    Node* n = head;
    while (n != NULL)
    {
      cout << n->value << " ";
      n = n->next;
    }
    a.print(); 
  }


  // Print all value
  void print()
  {
    Node *a = head;
    while (a != NULL)
    {
      cout << a->value << " ";
      a = a->next;
    }
    cout << "\n";
  }

};

int main()
{
  LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	a.print(); // prints  0 1 3 5 10
	
	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100
	
	a.Merge(b);
	a.print(); // prints  0 1 3 5 10 9 10 30 50 100
	b.print(); // prints  9 10 30 50 100
  return 0;
}