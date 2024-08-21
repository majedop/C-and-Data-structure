#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prv;

  Node(int val)
  {
    data = val;
    next = NULL;
    prv = NULL;
  }
};

class Dequeue
{
public:
  Node *head;
  Node *tail;
  int sz;
  Dequeue()
  {
    head = NULL;
    tail = NULL;
    sz = 0;
  }

  void Push_back(int val)
  {
    sz++;
    Node *newNode = new Node(val);
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

  void Push_front(int val)
  {
    sz++;
    Node *newNode = new Node(val);
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

  void Pop_back()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return;
    }
    if (sz == 1)
    {
      delete head;
      head = NULL;
      tail = NULL;
      sz--;
      return;
    }
    Node *del_node = tail;
    tail = tail->prv;
    delete[] del_node;
    tail->next = NULL;
    sz--;
  }

  void Pop_front()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return;
    }
    if (sz == 1)
    {
      delete head;
      head = NULL;
      tail = NULL;
      sz--;
      return;
    }
    Node *del_node = head;
    head = head->next;
    delete[] del_node;
    head->prv = NULL;
    sz--;
  }

  int Front()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return -1;
    }
    return head->data;
  }

  int Back()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return -1;
    }
    return tail->data;
  }

  int empty()
  {
    if (sz == 0)
      return 1;
    return 0;
  }

  int Size()
  {
    return sz;
  }
};

int main()
{
  Dequeue dq;
  dq.Push_back(10);
  dq.Push_back(20);
  dq.Push_back(30);
  dq.Push_back(40);
  dq.Push_back(50);

  cout << dq.Back() << " ";
  dq.Pop_back();
  cout << dq.Back() << " ";
  dq.Pop_back();
  cout << dq.Back() << " ";
  dq.Pop_back();
  cout << dq.Back() << " ";
  dq.Pop_back();
  cout << dq.Back() << " ";
  dq.Pop_back();

  cout << "\n";

  Dequeue dq1;
  dq1.Push_back(1);
  dq1.Push_back(2);
  dq1.Push_back(3);
  dq1.Push_back(4);
  dq1.Push_back(5);

  cout << dq1.Front() << " ";
  dq1.Pop_front();
  cout << dq1.Front() << " ";
  dq1.Pop_front();
  cout << dq1.Front() << " ";
  dq1.Pop_front();
  cout << dq1.Front() << " ";
  dq1.Pop_front();
  cout << dq1.Front() << " ";
  dq1.Pop_front();

  return 0;
}