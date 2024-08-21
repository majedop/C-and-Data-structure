#include <bits/stdc++.h>
using namespace std;

template <class T>
class Queue
{
public:
  T *a;
  int arr_cap;
  int l, r;
  int sz;

  Queue()
  {
    a = new T[1];
    arr_cap = 1;
    l = 0;
    r = -1;
    sz = 0;
  }

  void remove_circular()
  {
    if (l > r)
    {
      T *temp;
      temp = new T[arr_cap];
      int idx = 0;
      for (int i = l; i < arr_cap; i++)
      {
        temp[idx] = a[i];
        idx++;
      }

      for (int i = 0; i <= r; i++)
      {
        temp[idx] = a[i];
        idx++;
      }
      swap(temp, a);
      delete[] temp;
      l = 0;
      r = arr_cap - 1;
    }
  }
  void increas_arry_cap()
  {
    remove_circular();
    T *temp = new T[arr_cap * 2];
    for (int i = 0; i < arr_cap; i++)
    {
      temp[i] = a[i];
    }
    swap(temp, a);
    delete[] temp;
    arr_cap *= 2;
  }

  void Push_back(T val)
  {
    if (sz == arr_cap)
    {
      increas_arry_cap();
    }
    r++;
    if (r == arr_cap)
    {
      r = 0;
    }
    a[r] = val;
    sz++;
  }
  void Pop_front()
  {
    if (sz == 0)
    {
      cout << "Queus is empty";
      return;
    }
    l++;
    if (l == arr_cap)
    {
      l = 0;
    }
    sz--;
  }

  T front()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return -1;
    }
    return a[l];
  }
};

int main()
{
  Queue<int> q;
  q.Push_back(10);
  q.Push_back(20);
  q.Push_back(30);
  q.Push_back(40);
  q.Push_back(50);
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  q.Push_back(60);
  q.Push_back(70);
  cout << q.front() <<" ";
  q.Pop_front();
  cout << q.front() <<" ";
  q.Pop_front();
  cout << "\n"; 
  
  Queue<char> q1;
  q1.Push_back('a');
  q1.Push_back('b');
  q1.Push_back('c');
  q1.Push_back('d');
  q1.Push_back('e');
  cout << q1.front() <<" ";
  q1.Pop_front();
  cout << q1.front() <<" ";
  q1.Pop_front();
  cout << q1.front() <<" ";
  q1.Pop_front();
  cout << q1.front() <<" ";
  q1.Pop_front();
  cout << q1.front() <<" ";
  q1.Pop_front();
  q1.Push_back('f');
  q1.Push_back('g');
  cout << q1.front() <<" ";
  q1.Pop_front();
  cout << q1.front() <<" ";
  q1.Pop_front();

    return 0;
}