#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
  T data;
  Node *next;

  Node(T value)
  {
    data = value;
    next = NULL;
  }
};

template <class T>
class Stack
{
public:
  Node<T> *head;
  Node<T> *top;
  int sz;

  Stack()
  {
    head = NULL;
    top = NULL;
    sz = 0;
  }

  void Push(T value)
  {
    sz++;
    Node<T> *newNode = new Node<T>(value);
    if (head == NULL)
    {
      head = newNode;
      top = newNode;
      return;
    }

    top->next = newNode;
    top = newNode;
  }

  void Pop()
  {
    if (top == NULL)
    {
      head = NULL;
    }
    else
    {
      top->next = NULL;
    }

    Node<T> *a = head;
    int cur_sz = 0;
    while (cur_sz != sz - 2)
    {
      a = a->next;
      cur_sz++;
    }
    delete delNode;
    top = a;
    sz--;
  }

  int getSize()
  {
    return sz;
  }

  T Top()
  {
    if (sz == 0)
    {
      cout << "Stack is empty"
           << "\n";

      return -1;
    }
    return top->data;
  }
};
int main()
{
  Stack<int> st;
  st.Push(10);
  st.Push(20);
  st.Push(30);
  st.Push(40);
  while (st.getSize() > 0)
  {
    cout << st.Top() << " ";
    st.Pop();
  }

  cout << "\n";
  Stack<char> ch;
  ch.Push('A');
  ch.Push('B');
  ch.Push('C');
  while (ch.getSize() > 0)
  {
    cout << ch.Top() << " ";
    ch.Pop();
  }

  return 0;
}