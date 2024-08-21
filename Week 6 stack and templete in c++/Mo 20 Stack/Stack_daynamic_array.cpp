#include <bits/stdc++.h>
using namespace std;

template <class T >
class Stack
{
public:
  T *a;
  int stack_size;
  int arry_cap;

  Stack()
  {
    a = new T[1];
    arry_cap = 1;
    stack_size = 0;
  }

  void Incresing_arry_cap()
  {
    T *temp;
    temp = new T[arry_cap * 2];
    for (int i = 0; i < arry_cap; i++)
    {
      temp[i] = a[i];
    }
    swap(a, temp);
    delete []temp;
    arry_cap = arry_cap * 2;
  }

  void Push(T value)
  {
    if (stack_size+1 > arry_cap)
    {
      Incresing_arry_cap();
    }

    stack_size++;
    a[stack_size - 1] = value;
  }

  void Pop()
  {
    if (stack_size == 0)
    {
      cout << "Stack is empty!"
           << "\n";
      return;
    }
   // a[stack_size - 1] = 0;
    stack_size--;
  }

  T Top()
  {
    if (stack_size == 0)
    {
      cout << "Stack is empty"
           << "\n";
           T a;
      return a;
    }
    return a[stack_size - 1];
  }
};

int main()
{
  Stack<double> st;
  st.Push(10.52);
  st.Push(20.21);
  st.Push(3.50);
  cout << st.Top() <<" ";
  st.Pop();
  cout << st.Top() <<" ";
  st.Pop();
  cout << st.Top() <<" ";

  cout << "\n";

  Stack <char> sd;
  sd.Push('c');
  sd.Push('b');
  sd.Push('a');
  cout << sd.Top() <<" ";
  sd.Pop();
  cout << sd.Top() <<" ";
  sd.Pop();
  cout << sd.Top() <<" ";

  
  return 0;
}