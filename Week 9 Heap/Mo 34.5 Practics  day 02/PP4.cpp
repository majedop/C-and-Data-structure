#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<int,int> mp;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    mp[in]++;
  }
  int i = 0;
  for(auto it: mp)
  {
    if(it.second >= 2)
    {
      cout << "First duplicate value is " << it.first 
      << ", First occuring index is " <<  i;
      break;
    } 
    i++;
  } 
  
  

  return 0;
}