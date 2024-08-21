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
  Node *head;
  Node *tell;
  int sz;
  Queue()
  {
    head = NULL;
    tell = NULL;
    sz = 0;
  }

  void Push_back(int val)
  {
    sz++;
    Node* newNode = new Node(val);
    if(head  == NULL)
    {
      head = newNode;
      tell = newNode;
      return;
    }
    tell->next = newNode;
    tell = newNode; 
  }

  void Pop_front()
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
    Node* a = head;
    head = head->next;
    delete a;

    sz--;
  }

  int front()
  {
    if(sz == 0)
    {
      cout << "Queue is empty ";
      return -1;
    }
    return head->data;
  }

  
};
int main()
{
  
  Queue q;
  q.Push_back(10);
  q.Push_back(20);
  q.Push_back(30);
  q.Push_back(40);
  q.Push_back(50);
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();

  return 0;
}