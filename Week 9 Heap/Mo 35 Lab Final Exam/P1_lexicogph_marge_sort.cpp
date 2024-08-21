#include <bits/stdc++.h>
using namespace std;

vector<string> merge_sort(vector<string> a)
{
  if (a.size() <= 1)
    return a;
  int mid = a.size() / 2;
  vector<string> a_left, a_right;
  for (int i = 0; i < mid; i++)
  {
    a_left.push_back(a[i]);
  }
  for (int i = mid; i < a.size(); i++)
  {
    a_right.push_back(a[i]);
  }

  vector<string> sorted_left = merge_sort(a_left);
  vector<string> sorted_right = merge_sort(a_right);
  vector<string> ans;
  int idx1 = 0, idx2 = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (idx1 == sorted_left.size())
    {
      ans.push_back(sorted_right[idx2]);
      idx2++;
    }
    else if (idx2 == sorted_right.size())
    {
      ans.push_back(sorted_left[idx1]);
      idx1++;
    }
    else if (sorted_left[idx1] < sorted_right[idx2])
    {
      ans.push_back(sorted_left[idx1]);
      idx1++;
    }
    else
    {
      ans.push_back(sorted_right[idx2]);
      idx2++;
    }
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  vector<string> a;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    a.push_back(s);
  }

  vector<string> ans = merge_sort(a);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}