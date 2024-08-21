#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, int> mp;
  mp[5] = 15;
  mp[3] = 10;
  mp[4] = 5;
  mp[4] = 3;
  mp[1] = 11;
  for(auto it:mp)
  {
    cout << it.first <<" " << it.second <<"\n";
  }
  return 0;
}