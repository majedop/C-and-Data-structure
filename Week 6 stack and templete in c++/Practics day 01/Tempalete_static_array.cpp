#include <bits/stdc++.h>
using namespace std;

const int maxx = 10;
template <class T> 
class Stack
{
  public:
  T a[maxx];
  int stack_size;

  Stack()
  {
    stack_size = 0;
  }

  void Push(T value)
  {
    if(stack_size > maxx)
    {
      cout << "Stack is Full" <<"\n";
      return;
    }
    stack_size++;
    a[stack_size-1] = value;
  }
  
  void Pop()
  {
    if(stack_size == 0)
    {
      cout << "Stack is empty" <<"\n";
      return;
    }
    stack_size--;
  }
  
  int getSize()
  {
    return stack_size;
  }
  T Top()
  {
    if(stack_size == 0)
    {
      cout << "Stack is empty" <<"\n";
      return 0;
    }
    return a[stack_size-1];
  }

};

int main()
{
  Stack <int> st;
  st.Push(10);
  st.Push(20);
  st.Push(30);
  st.Push(40);
  st.Push(50);
  st.Push(60);
  while (st.getSize() > 0)
  {
    cout << st.Top() <<" ";
    st.Pop();
  }

  cout << "\n";
  Stack <char> ch;
  ch.Push('A');
  ch.Push('B');
  ch.Push('C');
  ch.Push('D');
  while (ch.getSize() > 0)
  {
    cout << ch.Top() <<" ";
    ch.Pop();
  }
  
  return 0;
}                      