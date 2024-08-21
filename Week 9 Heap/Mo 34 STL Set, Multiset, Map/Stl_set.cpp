#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> st;
  st.insert(8); // O(logn)
  st.insert(5);
  st.insert(9);
  st.insert(2);
  st.insert(1);
  st.insert(2);
  st.insert(4);
  cout << st.size() << "\n"; // O(1)

  for(auto it: st) // O(n)
  cout  << it <<" ";
  
  st.erase(9); // O(logn)
  cout << "\n";
  for (auto it = st.begin(); it != st.end(); it++) // O(n)
  {
   cout << *it << " ";
  }
  cout << "\n";

  if(st.find(10) != st.end())  // st.find() , O(logn)
  cout << "found" << "\n";
  else
  cout << "not Found" << "\n";

  return 0;
}