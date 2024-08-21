#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node(int val)
  {
    data = val;
    next = NULL; 
  }
};
class Queue
{
  public:
  Node* head;
  Node* tell;
  int sz;
  Queue()
  {
    head = NULL;
    tell = NULL;
    sz = 0;
  }

 // Time = O(1)
  void enqueue(int val)
  {
    sz++;
    Node* newNode = new Node(val);
    if(head == NULL)
    {
      head = newNode;
      tell = newNode;
      return;
    }

    tell->next = newNode;
    tell = newNode;
  }
  
  // Time = O(1)
  void dequeue()
  {
    if(sz == 0)
    {
      cout << "Queue is empty";
      return;
    }
    if(sz == 1)
    {
      delete head;
      head = NULL;
      tell = NULL;
      return;
    }
    sz--;
    Node* a = head;
    head = head->next;
    delete a;
  }
  // Time = O(1)
  int front()
  {
    if(head == NULL)
    {
      cout << "Queue is empty";
      return -1;
    }
    return head->data;
  }
};

int main()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  cout << q.front() <<" ";
  q.dequeue();
  cout << q.front() <<" ";
  q.dequeue();
  cout << q.front() <<" ";
  q.dequeue();
  return 0;
}