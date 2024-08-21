#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  if (a == b)
  {
    cout << 0 << endl;
    return;
  }
  int mx, mn;
  mx = max(a, b);
  mn = min(a, b);

  double d = mx - mn;
  d /= 2;

  while (d > c)
  {
    d -= c;
    ans++;
  }

  cout << ans + 1 << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}