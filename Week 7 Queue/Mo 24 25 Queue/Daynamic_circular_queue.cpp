#include <bits/stdc++.h>
using namespace std;


class Queue
{
public:
  int *a;
  int l, r;
  int sz;
  int arry_cap;
  Queue()
  {
    a = new int[1];
    arry_cap = 1;
    l = 0;
    r = -1;
    sz = 0;
  }

  void remove_circlular()
  {
    if (l > r)
    {
      int *temp = new int[arry_cap];
      int idx = 0;
      for (int i = l; i < arry_cap; i++)
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
      l = 0;
      r = arry_cap-1;
      delete []temp;
    }
  }

  void incres_size()
  {
    remove_circlular();
    int *temp = new int[arry_cap*2];
    for (int i = 0; i < arry_cap; i++)
    {
      temp[i] = a[i];
    }
    swap(temp, a);
    arry_cap  = arry_cap*2;
    delete []temp;
  }
  void enqueue(int value)
  {
    if (sz == arry_cap)
    {
      incres_size();
    }
    r++;
    if (r == arry_cap)
    {
      r = 0;
    }
    a[r] = value;
    sz++;
  }

  void dequeue()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return;
    }
    l++;

    if (l == arry_cap)
    {
      l = 0;
    }
    sz--;
  }

  int front()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return -1;
    }
    return a[l];
  }

  int getSize()
  {
    return sz;
  }
};
int main()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  while (q.getSize())
  {
    cout << q.front() <<"";
    q.dequeue();
  }
  


  return 0;
}