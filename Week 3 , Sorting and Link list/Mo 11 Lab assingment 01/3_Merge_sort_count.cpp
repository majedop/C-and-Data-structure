#include <bits/stdc++.h>
using namespace std;

int n, k;
int countt = 0;
vector<int> Merge_sort(vector<int> a)
{
  if (a.size() <= 1)
    return a;
  int mid = a.size() / 2;
  vector<int> b, c;
  for (int i = 0; i < mid; i++)
    b.push_back(a[i]);

  for (int i = mid; i < a.size(); i++)
    c.push_back(a[i]);

  vector<int> sorted_b = Merge_sort(b);
  vector<int> sorted_c = Merge_sort(c);

  vector<int> sorted_a;
  int indx_b = 0, indx_c = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (sorted_b.size() == indx_b)
    {
      sorted_a.push_back(sorted_c[indx_c]);
      indx_c++;
    }
    else if (sorted_c.size() == indx_c)
    {
      sorted_a.push_back(sorted_b[indx_b]);
      indx_b++;
    }
    else if (sorted_b[indx_b] < sorted_c[indx_c])
    {
      sorted_a.push_back(sorted_b[indx_b]);
      indx_b++;
    }
    else
    {
      sorted_a.push_back(sorted_c[indx_c]);
      indx_c++;
    }
  }

  if (sorted_a.size() == n)
  {
    int i = 0, j = n - 1;
    while (i < j)
    {
      if (sorted_a[i] + sorted_a[j] > k)
        j--;
      else if (sorted_a[i] + sorted_a[j] < k)
        i++;
      else if (sorted_a[i] + sorted_a[j] == k)
      {
        countt++;
        i++;
        j--;
      }
    }
  }
  return sorted_a;
}
int main()
{
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> k;
  vector<int> ans = Merge_sort(a);
  cout << countt;

  return 0;
}