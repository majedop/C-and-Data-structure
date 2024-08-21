#include <bits/stdc++.h>
using namespace std;

void Print_all(list<int> l)
{
  auto it = l.begin();
  while (it != l.end())
  {
    cout << *it <<" ";
    it++;
  }
  cout <<"\n";
}

void Insert_any_postion(list<int> &l, int index, int value)
{
  auto it = l.begin(); // O(1)
  advance(it, index);  // O(index)
  l.insert(it, value);  // O(1)
} 

void Delete_any_postion(list<int> &l, int index)
{
  list<int> ::iterator it = l.begin(); // O(1)
  advance(it, index); // O(index)
  l.erase(it); // O(1)


}
int main()
{
  list<int> l;
  l.push_front(20);
  l.push_front(10);
  l.push_back(30);
  l.push_back(40);
  Print_all(l);

  Insert_any_postion(l, 3, 500);
  Print_all(l);

  Delete_any_postion(l, 2);
  Print_all(l);

  return 0;
}