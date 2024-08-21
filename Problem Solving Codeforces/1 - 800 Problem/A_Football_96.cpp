#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  int cnt = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == s[i - 1])
    {
      cnt++;
      if (cnt == 6)
      {
        cout << "YES";
        return 0;
      }
    }
    else
      cnt = 0;
  }
  cout << "NO";
  return 0;
}