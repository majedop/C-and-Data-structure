#include <bits/stdc++.h>
using namespace std;

const int max_size = 5;
class Queue
{
  public:
  int arr[max_size];
  int l,r;
  int sz;
  Queue()
  {
    l = 0;
    r = -1;
    sz = 0;
  }

  void enqueue(int value)
  {
    if(sz == max_size)
    {
      cout << "Queue is full!";
      return ;
    }
    r++;
    if(r == max_size)
    {
      r = 0;
    }
    arr[r] = value;
    sz++;
  }

  void dequeue()
  {
    if(sz == 0)
    {
      cout << "Queue is empty";
      return;
    }
    l++;

    if(l == max_size)
    {
      l = 0;
    }
    sz--;
  }

  int front()
  {
    if(sz == 0)
    {
      cout << "Queue is empty";
      return -1;
    }
    return arr[l];
  }

  int getSize()
  {
    return sz;
  }

};
int main()
{
  Queue  q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  
  q.dequeue();
  q.dequeue();
  q.dequeue();
  cout << q.front() <<"\n";
  q.enqueue(6);
  q.enqueue(7);
  q.enqueue(8);

  q.dequeue();
  q.dequeue();
  cout << q.front() <<"\n";
  q.dequeue();
  cout << q.front();
  return 0;
}