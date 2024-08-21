#include <bits/stdc++.h>
using namespace std;

void Print(list<int> l)
{
  auto a = l.begin();
  while (a != l.end())
  {
    cout << *a <<" ";
    a++;
  }
  
  cout << "\n";
}

int main()
{
  list<int> l;
  // Time complexity O(1)
  l.push_front(5);
  l.push_front(4);
  l.push_front(3);
  l.push_front(2);
  l.push_front(1);
  // Time complexity O(n)
  Print(l);
  
  // Time complexity O(1)
  l.push_back(6);
  l.push_back(7);
  Print(l);
  
  // Time complexity O(1)
  l.pop_front();
  l.pop_front();
  Print(l);
   
  // Time complexity O(1)
  l.pop_back();
  Print(l);


  return 0;
}