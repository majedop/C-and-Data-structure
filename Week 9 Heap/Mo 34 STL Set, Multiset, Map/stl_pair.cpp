#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<pair<char,int>> p;
  for (int i = 1; i <=5; i++)
  {
    char ch;
    cin >> ch;
  }

  for (int i = 1; i <=5; i++)
  {
    cout << p[i].second <<" = " << p[i].first << "\n";
  }
  
  
  

  return 0;
}