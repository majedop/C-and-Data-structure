#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a;
  a.resize(n + 1);
  
  for (int i = 1; i <= n - 1; i++)
    cin >> a[i];

  vector<int> freq;
  freq.resize(n + 1);

  for (int i = 1; i <= n; i++)
    freq[i] = 0;

  for (int i = 1; i <= n; i++)
    freq[a[i]]++;

  for (int i = 1; i <= n; i++)
  {
    if (freq[i] == 0)
      cout << i;
  }

  return 0;
}