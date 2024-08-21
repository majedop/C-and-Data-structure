#include <bits/stdc++.h>
using namespace std;

int main()
{
  multiset<int> a;
  a.insert(5); // O(logn)
  a.insert(8);
  a.insert(3);
  a.insert(7);
  a.insert(9);
  a.insert(9);
  a.insert(9);
  a.insert(10);
  
  cout <<"Size " << a.size() << "\n"; // O(1)
  for(auto it: a) // O(n)
  cout << it << " ";
  cout << "\n";

  a.erase(a.find(9)); // O(logn)
  a.erase(a.find(9));
  cout <<"Size " << a.size() << "\n";
  for(auto it = a.begin(); it != a.end(); it++) // O(n)
  cout << *it << " ";
  cout << "\n";

  return 0;
}