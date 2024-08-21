#include <bits/stdc++.h>
using namespace std;

int n, k;
int countt = 0;
vector<int> Searching(vector<int> b, int terget)
{
  int low = 0, height = k - 1;
  while (low <= height)
  {
    int mid = (height + low) / 2;

    if (b[mid] == terget)
    {
      countt++;
      break;
    }
    if (b[mid] < terget)
      height = mid - 1;
    else
      low = mid + 1;
  }
}

int main()
{
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> k;
  vector<int> b(k);
  for (int i = 0; i < k; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++)
  {
    vector<int> ans = Searching(b, a[i]);
  }
  if (a.size() == countt)
    cout << "Yes";
  else
    cout << "NO";

  return 0;
}