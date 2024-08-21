#include <bits/stdc++.h>
using namespace std;

template<class T> 
class Stack
{
  public:
  T *a;
  int arry_cp;
  int stack_sz;

  Stack()
  {
    a = new T[1];
    arry_cp = 1;
    stack_sz = 0;
  }

  void Incresing_arrya_cp()
  {
    T* temp;
    temp = new T[arry_cp*2];
    for (int i = 0; i < arry_cp; i++)
    {
      temp[i] = a[i];
    }
    swap(a, temp);
    delete []temp;
    arry_cp = arry_cp*2;
  }

  void Decrease_size()
  {
    T *temp;
    temp  = new T[arry_cp/2];
    for (int i = 0; i < arry_cp/2; i++)
    {
     temp[i] = a[i];
    }
    swap(a,temp);
    delete []temp;
    arry_cp = arry_cp/2;
  }

  void Push(T value)
  {
    if(stack_sz < arry_cp/2)
    {
      Decrease_size();
    }
    if(stack_sz+1 > arry_cp)
    {
      Incresing_arrya_cp();
    }
    stack_sz++;
    a[stack_sz-1] = value;
  }
  void Pop()
  {
     if(stack_sz < arry_cp/2)
    {
      Decrease_size();
    }
    if(stack_sz == 0)
    {
      cout << "Stack is empty" <<"\n";
      return;
    } 
    stack_sz--;
  }
  int getSize()
  {
    return stack_sz;
  }

  T Top()
  {
     if(stack_sz < arry_cp/2)
    {
      Decrease_size();
    }
    if(stack_sz == 0)
    {
      cout << "Stack is empty" <<"\n";
      T a;
      return a;
    }
    return a[stack_sz-1];
  }
};
int main()
{

  Stack<double> st;
  st.Push(3.5);
  st.Push(4.2);
  st.Push(2.5);
  st.Push(5.6);

  while (st.getSize() > 0)
  {
    cout << st.Top() <<"\n";
    st.Pop();
  }

  Stack<char> ch;
  ch.Push('C');
  ch.Push('B');
  ch.Push('A');
  while (ch.getSize() > 0)
  {
    cout << ch.Top() <<" ";
    ch.Pop();
  }
  
  

  return 0;
}