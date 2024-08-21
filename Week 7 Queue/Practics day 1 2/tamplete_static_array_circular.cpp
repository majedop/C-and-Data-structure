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
  
  void Push_back(int val)
  {
    if(sz == max_size)
    {
      cout << "Queue is full";
      return;
    }
    r++;
    if(r == max_size)
    {
      r = 0;
    }
    arr[r] = val;
    sz++;
  }

  void Pop_front()
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

  int empty()
  {
    if(sz == 0)
    return 1;
    
    return 0;
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

};

int main()
{
  Queue q;
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
  
    return 0;
}