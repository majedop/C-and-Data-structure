#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
  T data;
  Node *next;
  Node(T val)
  {
    data = val;
    next = NULL;
  }
};

template <class T>
class Stack
{
public:
  Node<T> *head;
  int sz;
  Stack()
  {
    head = NULL;
    sz = 0;
  }
  void Push(T val)
  {
    sz++;
    Node<T> * new_node = new Node<T>(val);
    if(head == NULL)
    {
      head = new_node;
      return;
    }
    new_node->next = head;
    head = new_node;
  }

  void Pop()
  {
    if(sz == 0)
    {
      cout << "Stack is empty";
      return;
    }
    sz--;
    Node<T> *delNode = head;
    head = head->next;

    delete delNode;
   
  }

 T Top()
  {
    if(sz == 0)
    {
      cout << "Stack is empty";
      T a;
      return  a;
    }
    return head->data;
  }
  int getSize()
  {
    return sz;
  }

};

int main()
{
  Stack <int> st;
  st.Push(10);
  st.Push(20);
  st.Push(30);
  st.Push(50);

  cout << st.Top() << " ";
  st.Pop();
  cout << st.Top() << " ";
  st.Pop();
  cout << st.Top() << " ";
  st.Pop();
  cout << st.Top() << " ";
  st.Pop();
  cout << "\n";

  Stack <char> stc;
  stc.Push('A');
  stc.Push('B');
  stc.Push('C');
  stc.Push('D');

  cout << stc.Top() << " ";
  stc.Pop();
  cout << stc.Top() << " ";
  stc.Pop();
  cout << stc.Top() << " ";
  stc.Pop();
  cout << stc.Top() << " ";
  stc.Pop();
  cout << "\n";

  return 0;
}