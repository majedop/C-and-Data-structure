#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s, pi = "314159265358979323846264338327";
  cin >> s;

  int cnt = 0;
  for (int i = 0; i <s.size(); i++)
  {
    if (s[i] == pi[i])
    {
      cnt++;
    }
    else
    break;
  }
  cout << cnt <<"\n";
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}