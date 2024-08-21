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

  void Push(int value)
  {
    sz++;
    Node* newNode = new Node(value);
    if(head == NULL)
    {
      head = newNode;
      top = newNode;
      return;
    }
    newNode->prv  = top;
    top->next = newNode;
    top = newNode;
  }

  void Pop()
  {
    sz--;
    Node* delNode = top;
    top = top->prv;
    if(top == NULL)
    {
      top = NULL;
    }
    else
    top->next = NULL;

    delete delNode;
  }

  int getSize()
  {
    return sz;
  }
  int Top()
  {
    if(sz == 0)
    {
      cout << "Stack is empty" <<"\n";
      return sz;
    }
    return top->data;

  }
};
int main()
{
  Stack a;
  a.Push(3);
  a.Push(5);
  a.Push(4);
  a.Push(1);
  a.Push(2);

  Stack temp;
  while (a.getSize() > 0)
  {
    int t = a.Top();
    a.Pop();
    while (temp.getSize() > 0)
    {
      if(temp.Top() < t)
      {
        break;
      }
      a.Push(temp.Top());
      temp.Pop();
    }
    temp.Push(t);
  }
  swap(a, temp);

  while (a.getSize() > 0)
  {
    cout << a.Top() <<"\n";
    a.Pop();
  }
  
  


  
}