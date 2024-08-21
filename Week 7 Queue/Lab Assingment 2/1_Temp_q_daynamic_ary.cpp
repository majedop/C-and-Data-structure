#include <bits/stdc++.h>
using namespace std;

template <class T>
class Queue
{
public:
  T *a;
  int l, r;
  int sz;
  int arr_cap;

  Queue()
  {
    a = new T[1];
    arr_cap = 1;
    l = 0;
    r = -1;
    sz = 0;
  }

  // if queue have circular mood then this function remove this array circular
  void remove_circuler()
  {
    if (l > r)
    {
      T *temp = new T[arr_cap];
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
      swap(a, temp);
      delete [] temp;
      l = 0;
      r = arr_cap - 1;
    }
  }
  

  // Incrase queue size to dynamicly
  void incrase_size()
  {
    remove_circuler();

    T *temp = new T[arr_cap * 2];
    for (int i = 0; i < arr_cap; i++)
    {
      temp[i] = a[i];
    }
    swap(a, temp);
    delete [] temp;
    arr_cap *= 2;
  }
  
  // This function push element queue line in last
  void enqueue(T val)
  {
    if (sz == arr_cap)
    {
      incrase_size();
    }
    r++;
    if (r == arr_cap)
    {
      r = 0;
    }
    a[r] = val;
    sz++;
  }
  
  // This function delele queue last emement
  void dequeue()
  {
    if(sz == 0)
    {
      cout << "Queue is empty";
      return;
    }

    l++;
    if(l == arr_cap)
    {
      l = 0;
    }
    sz--;
  }
  
  // this function return queue total size
  int getSize()
  {
    return sz;
  }
  // front function this function return queue 1st element

  T front()
  {
    if(sz == 0)
     {
      cout << "Queue is empty";
      T a;
      return a;
    }
    return a[l];
  }

};
int main()
{
  Queue<int> q;
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  cout << q.front() <<" ";
  q.dequeue(); 
  cout << q.front() <<" ";  
  q.dequeue();
  cout << q.front() <<" ";  
  q.dequeue();
  cout << q.front() <<" ";  
  q.dequeue();
  cout << "\n";

  Queue <char> qc;
  qc.enqueue('A');
  qc.enqueue('B');
  qc.enqueue('C');
  qc.enqueue('D');

  cout <<  qc.front() <<" ";
  qc.dequeue();
  cout <<  qc.front() <<" ";
  qc.dequeue();
  cout <<  qc.front() <<" ";
  qc.dequeue();
  cout <<  qc.front() <<" ";
  qc.dequeue();

  

  return 0;
}