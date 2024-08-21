#include<bits/stdc++.h>
using namespace std;

const int max_size= 500;
class Queue
{
  public:
  int ar[max_size];
  int l, r;
  Queue()
  {
    l = 0;
    r = -1;
  }

  void enqueue(int value)
  {
    if(r+1 > max_size)
    {
      cout << "Queue is full" <<"\n";
      return;
    }
    r++;
    ar[r] = value;
  }
  void dequeue()
  {
   if(l>r)
   {
    cout << "Queue is empty" <<"\n";
    return;
   }
    l++;
  }
  int size()
  {
    return r-l+1;
  }
  int front()
  {
    if(l>r)
    {
      cout << "Queue is empty";
      return -1;
    }
    return ar[l];
  }

};
int main()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  cout <<"Size ="<< q.size() <<"\n";
  cout << q.front() << "\n";
  q.dequeue();
  cout << q.front() <<"\n";
  q.dequeue();
  cout << q.front() <<"\n";
  q.dequeue();
  q.dequeue();
  cout <<"Size " << q.size() <<"\n";

  return 0;
}