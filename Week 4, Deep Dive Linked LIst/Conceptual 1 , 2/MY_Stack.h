#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node* prv;

  Node(int value)
  {
    data = value;
    next = NULL;
    prv = NULL;
  }
};

class Stack
{
  public:
  Node* head;
  Node* top;
  int sz;

  Stack()
  {
    head = NULL;
    top = NULL;
    sz = 0;
  }

  void PUSH(int value)
  {
    sz++;
    Node* newNode = new Node(value);
    if(head == NULL)
    {
      head = newNode;
      top = newNode;
      return;
    }
    top->next = newNode;
    newNode->prv = top;
    top = newNode;
  }

  void POP()
  {
    if(top == head)
    {
      head = top = NULL;
      delete head;
      return;
    }
    Node* b = top->prv;
    b->next = NULL;
    delete top;
    top = b;
    sz--;
  }
  
  bool EMPTY()
  {
    if(sz == 0)
    return true;

    return false;
    
  }
  int SIZE()
  {
    return sz;
  }
  
  int TOP()
  {
    return top->data;
  }
};