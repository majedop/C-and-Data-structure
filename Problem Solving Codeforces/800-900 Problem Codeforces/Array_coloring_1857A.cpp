#include <bits/stdc++.h>
using namespace std;

void Solve()
{
   int n;
  cin >> n;
  vector<int> a(n);
  int sum= 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum+= a[i];
  }
  if(sum % 2 == 0)
    cout <<"YES" <<"\n";
  else
  cout << "NO" << "\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Solve();
  }
  return 0;
}