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
      cout << "Queue is empty";
      return -1;
    }
    return head->data;
  }

  T Back()
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
  deque<int> dq;
  dq.push_back(3);
  dq.push_back(4);
  dq.push_back(5);
  dq.push_front(2);
  dq.push_front(1);
  while (!dq.empty())
  {
    cout << dq.front() << " ";
    dq.pop_front();
  }

  cout << '\n';
  deque<char> dq1;
  dq1.push_back('C');
  dq1.push_back('D');
  dq1.push_back('E');
  dq1.push_front('B');
  dq1.push_front('A');

  while (!dq1.empty())
  {
    cout << dq1.back() << " ";
    dq1.pop_back();
  }

  return 0;
}