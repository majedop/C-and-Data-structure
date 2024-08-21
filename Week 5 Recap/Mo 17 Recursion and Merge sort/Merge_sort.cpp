#include <bits/stdc++.h>
using namespace std;

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
  int c_idx = 0, b_idx = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (b_idx == sorted_b.size())
    {
      sorted_a.push_back(sorted_c[c_idx]);
      c_idx++;
    }
    else if (c_idx == sorted_c.size())
    {
      sorted_a.push_back(sorted_b[b_idx]);
      b_idx++;
    }
    else if (sorted_b[b_idx] > sorted_c[c_idx])
    {
      sorted_a.push_back(sorted_c[c_idx]);
      c_idx++;
    }
    else
    {
      sorted_a.push_back(sorted_b[b_idx]);
      b_idx++;
    }
  }

  return sorted_a;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  vector<int> ans = Merge_sort(a);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}