#include <bits/stdc++.h>
using namespace std;

const int max_size = 100;
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
  // Insert value back
  void enqueue(int value)
  {
    if(sz > max_size)
    {
      cout << "Queue is full";
      return;
    }
    r++;
    arr[r] = value;
    sz++;
  }
  
  // delete front
  void dequeue()
  {
    if(sz== 0)
    {
      cout << "Queue is empty" << "\n";
      return;
    }
    l++;
    sz--;
  }
  
  int Size()
  {
    return sz;
  }
  // return front value
  int front()
  {
    if(sz == 0)
    {
      cout << "Queue is empty" << "\n";
      return -1;
    }
    return arr[l];
  }
};
int main()
{
 Queue q;
 q.enqueue(2);
 q.enqueue(4);
 q.enqueue(8);
 q.enqueue(10);
 while (q.Size())
 {
  cout << q.front() << " ";
  q.dequeue();
 }
 

  return 0;
}