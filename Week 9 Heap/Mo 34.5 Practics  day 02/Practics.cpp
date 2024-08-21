#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin >> n;
  multiset<int> ms;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    ms.insert(in);
  }

  cin >> m;
  vector<int> v(m);
  for (int i = 0; i < m; i++)
  cin >> v[i];
  
  for (int i = 0; i < m; i++)
  {
    if(ms.find(v[i]) != ms.end())
    cout << v[i] << " ";
  }
  
  
  
  
  
  
  

  return 0;
}