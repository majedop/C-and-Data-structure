#include <bits/stdc++.h>
using namespace std;

void Print(list<int> l)
{
  auto it = l.begin();
  while (it != l.end())
  {
    cout << *it << " ";
    it++;
  }
  cout << "\n";
}
void Delete_zero(list<int> l)
{
  auto it = l.begin();
  while (it != l.end())
  {
    if (*it != 0)
      cout << *it << " ";

    it++;
  }
}
int main()
{
  list<int> l;
  l.push_back(0);
  l.push_back(2);
  l.push_back(0);
  l.push_back(0);
  l.push_back(5);
  Print(l);
  Delete_zero(l);

  return 0;
}