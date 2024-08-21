#include <bits/stdc++.h>
using namespace std;

template<class T>
class Node
{
  public:
   T data;
  Node* next;
  Node* prv;

  Node( T val)
  {
    data = val;
    next = NULL;
    prv = NULL;
  }
};
template <class T>
class Doubly_linked_list
{
  public:
  Node<T> *head;
  int sz;
  Doubly_linked_list()
  {
    head = NULL;
    sz = 0;
  }

  void Insert_at_head(T val)
  {
    sz++;
    Node<T> *newNode = new Node<T>(val);
    if(head == NULL)
    {
      head = newNode;
      return;
    }
    newNode->next = head;
    head->prv = newNode;
    head = newNode;
  }

  void Delete_at_head()
  {
    if(sz == 0)
    {
      return;
    }
    Node<T> *a = head;
    Node<T> *b = head->next;
    delete a;
    if(b != NULL)
    {
      b->prv = NULL;
    }
    head = b;
    sz--;
  }
  int getSize()
  {
    return sz;
  }
};
template<class T>
class Stack
{
  public:
  Doubly_linked_list<T>  dl;
  Stack()
  {
  }

  void Push(T val)
  {
    dl.Insert_at_head(val);
  }

  void Pop()
  {
    if(dl.getSize() == 0)
    {
      cout << "Stack is empty" <<"\n";
      return;
    }
    dl.Delete_at_head();
  }
  int getSize()
  {
    return dl.getSize();
  }
  T Top()
  {
    if(dl.getSize() == 0)
    {
      cout << "Stack is empty" <<" ";
      T a;
      return a;
    }
    return dl.head->data;
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
    cout << st.Top() <<" ";
    st.Pop();
  }
  cout <<"\n";
  Stack<char> ch;
  ch.Push('A');
  ch.Push('B');
  ch.Push('C');
  ch.Push('D');
  while (ch.getSize() > 0)
  {
    cout <<ch.Top() <<" ";
    ch.Pop();
  }
  
  

  return 0;
}