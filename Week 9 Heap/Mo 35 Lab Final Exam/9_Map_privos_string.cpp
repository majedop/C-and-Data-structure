#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<string> str(n);
  for (int i = 0; i < n; ++i)
    cin >> str[i];

  map<string, int> mp;
  for (int i = 0; i < n; i++)
  {
    string s = str[i];
    if (mp.find(s) == mp.end() || mp[s] == -1)
      cout << -1 << "\n";
    else
      cout << mp[s] << "\n";

    mp[s] = i;
  }
  return 0;
}