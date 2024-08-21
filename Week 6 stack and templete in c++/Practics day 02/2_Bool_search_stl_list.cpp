#include <bits/stdc++.h>
using namespace std;

void Print_all(list<int> l)
{
  auto it = l.begin();
  while (it != l.end())
  {
    cout << *it << " ";
    it++;
  }
  cout << "\n";
}
bool Search(list<int> l, int value)
{
  auto it = l.begin();
  while (it != l.end())
  {
    if (*it == value)
      return true;
    it++;
  }
  return false;
}
int main()
{
  list<int> l;
  l.push_front(5);
  l.push_front(4);
  l.push_front(6);
  l.push_front(2);
  l.push_front(3);

  Print_all(l);
  
    if(Search(l,4))
  cout << "True" <<"\n";
  else
  cout << "False" << "\n";

  return 0;
}