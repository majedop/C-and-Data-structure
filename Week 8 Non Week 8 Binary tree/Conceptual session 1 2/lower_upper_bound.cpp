#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  int q;
  cin >> q;
  while (q--)
  {
    int type, k;
    cin >> type >> k;
    if (type == 1)
    {
      auto it = lower_bound(a.begin(), a.end(), k);
      if (it != a.end())
      {
        int idx = it-a.begin(), value = *it;
        cout <<idx << " >> "<< value << "\n";
      }
      else
        cout << -1 << "\n";
    }
    else
    {
      auto it = upper_bound(a.begin(), a.end(), k);
      if (it != a.end())
      {
        int idx = it-a.begin(), value = *it;
        cout << idx <<" >> "<< value << "\n";
      }
      else
        cout << -1 << "\n";
    }
  }

  return 0;
}