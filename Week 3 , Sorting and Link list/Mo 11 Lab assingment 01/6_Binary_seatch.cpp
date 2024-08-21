#include <bits/stdc++.h>
using namespace std;
int n, k;
bool found = false;
void Binary_search(vector<int> a)
{
  int low = 0, end = n - 1;
  while (low <= end)
  {
    int mid = (end + low) / 2;

    if (a[mid] == k)
    {
      if (a[mid - 1] == k)
      {
        found = true;
        break;
      }
      else if (a[mid + 1] == k)
      {
        found = true;
        break;
      }
    }
    if (a[mid] > k)
      end = mid - 1;
    else
      low = mid + 1;
  }
}
int main()
{
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cin >> k;
  Binary_search(a);
  if (found)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}