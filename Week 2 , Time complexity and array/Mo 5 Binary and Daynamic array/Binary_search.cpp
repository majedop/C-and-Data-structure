#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(2);
  a.resize(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int low = 0, mid = 0, end = n - 1;
  while (low <= end)
  {
    mid = (low + end) / 2;
    if (a[mid] == k)
    {
      cout << "Yes"
           << " " << mid;
           return 0;
    }
    if (k > a[mid])
      low = mid + 1;
    else if (k < a[mid])
      end = mid - 1;
  }
  cout << "No";

  return 0;
}