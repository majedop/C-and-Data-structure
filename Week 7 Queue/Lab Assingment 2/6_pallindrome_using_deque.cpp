#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
  T data;
  Node *next;
  Node *prv;

  Node(T val)
  {
    data = val;
    next = NULL;
    prv = NULL;
  }
};

template <class T>
class Dequeue
{
public:
  Node<T> *head;
  Node<T> *tail;
  int sz;
  Dequeue()
  {
    head = NULL;
    tail = NULL;
    sz = 0;
  }

  // element push back position
  void Push_back(T val)
  {
    sz++;
    Node<T> *newNode = new Node<T>(val);
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

  // // element front back position
  void Push_front(T val)
  {
    sz++;
    Node<T> *newNode = new Node<T>(val);
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

  // element pop back position
  void Pop_back()
  {
    if (sz == 0)
    {
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
    Node<T> *del_node = tail;
    tail = tail->prv;
    delete[] del_node;
    tail->next = NULL;
    sz--;
  }

  /// element delete frist element
  void Pop_front()
  {
    if (sz == 0)
    {
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

    Node<T> *del_node = head;
    head = head->next;
    delete[] del_node;
    head->prv = NULL;
    sz--;
  }

  T Front()
  {
    if (sz == 0)
    {
      return -1;
    }
    return head->data;
  }

  T Back()
  {
    if (sz == 0)
    {
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
  Dequeue<char> dq;
  dq.Push_back('b');
  dq.Push_back('b');
  dq.Push_back('c');
  dq.Push_back('b');
  dq.Push_back('b');

  while (!dq.empty())
  {
    if (dq.Front() == dq.Back())
    {
      dq.Pop_front();
      dq.Pop_back();
    }
    else
    {
      cout << "NO";
      return 0;
    }
  }

  if (dq.empty())
    cout << "Yes";
  else
    cout << "NO";

  return 0;
}