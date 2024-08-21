#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector<int> v(n);
  for(int i = 0; i<n; i++)
  {
    cin >> v[i];
  }
  set<pair<int,int>> st;
  for (int i = 0; i < n; i++)
  {
    st.insert({v[i],i});
  }
  for(auto it: st)
  cout << "Value : " <<it.first << ", Privious Index :" << it.second <<"\n";


  return 0;
}