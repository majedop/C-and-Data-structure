#include <bits/stdc++.h>
using namespace std;

void print_all(list<int> l)
{
  list<int> ::iterator it = l.begin();
  while (it != l.end())
  {
    cout << *it << " ";
    it++;
  }
  cout << "\n";
}
int get_index_value(list<int> l, int index)
{
  if(index > l.size())
  {
   return -1;
  }

  int cur_index = 0;
  auto it = l.begin();
  while (cur_index != index)
  {
    cur_index++;
    it++;
  }
  return *it;
}
int main()
{
  list<int> l;
  l.push_back(3);
  l.push_back(2);
  l.push_back(6);
  l.push_back(4);
  l.push_back(5);
  print_all(l);

  cout << get_index_value(l, 2) <<"\n";
  

  

  return 0;
}