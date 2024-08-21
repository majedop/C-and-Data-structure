#include <bits/stdc++.h>
using namespace std;

const int maxx = 500;
class Stack
{
  public:
  int a[maxx];
  int stack_size;
  Stack()
  {
    stack_size = 0;
  }

  void Push(int val)
  {
    if(stack_size > maxx)
    {
      cout << "Stack is Full!!" << "\n";
      return;
    }
    stack_size++;
    a[stack_size-1] = val;
  }

  void Pop()
  {
    if(stack_size == 0)
    {
      cout << "Stack is empty" <<"\n";
      return;
    }
    a[stack_size-1] = 0;
    stack_size--;
  }

  int Top()
  {
    if(stack_size == 0)
    {
      cout << "Stack is empty" <<"\n";
      return -1;
    }
    return a[stack_size-1];
  }

};

int main()
{
  Stack st;
  st.Push(10);
  cout <<st.Top() <<" ";
  st.Push(20);
  cout <<st.Top() <<" ";
  st.Push(30);
  cout <<st.Top() <<" ";
  st.Push(40);
  cout <<st.Top() <<" ";
  cout <<"\n";
  st.Pop();
  cout<<st.Top() <<" ";


  return 0;
}