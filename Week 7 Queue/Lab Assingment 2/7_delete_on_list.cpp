#include <bits/stdc++.h>
using namespace std;

void deletevalue(list<int> &l, int val)
{
  int flag = 0;
  while (!l.empty())
  {
    if (l.front() != val)
    {
      cout << l.front() << " ";
    }
    else
    {
      flag = 1;
    }
    if (flag == 1)
    {
      val = INT_MAX;
    }
    l.pop_front();
  }
}
int main()
{
  list<int> l;
  l.push_back(7);
  l.push_back(3);
  l.push_back(8);
  l.push_back(4);
  l.push_back(5);
  l.push_back(4);

  deletevalue(l, 4);
  return 0;
}