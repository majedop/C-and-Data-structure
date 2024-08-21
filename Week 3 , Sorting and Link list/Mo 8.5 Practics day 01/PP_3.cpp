#include <bits/stdc++.h>
using namespace std;

int countt=0;
vector<int> merge_sort(vector<int> a)
{
  if (a.size() <= 1)
    return a;

  int mid = a.size() / 2;
  vector<int> x;
  vector<int> y;

  for (int i = 0; i < mid; i++)
    x.push_back(a[i]);

  for (int i = mid; i < a.size(); i++)
    y.push_back(a[i]);

  vector<int> sorted_x = merge_sort(x);
  vector<int> sorted_y = merge_sort(y);
  
  vector<int> sorted_a;
  int idx_x = 0;
  int idx_y = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (idx_x == sorted_x.size())
    {
      sorted_a.push_back(sorted_y[idx_y]);
      idx_y++;
    }
    else if (idx_y == sorted_y.size())
    {
      sorted_a.push_back(sorted_x[idx_x]);
      idx_x++;
    }
    else if(sorted_x[idx_x] < sorted_y[idx_y])
    {
      sorted_a.push_back(sorted_x[idx_x]);
      idx_x++;
    }
    else
    {
      sorted_a.push_back(sorted_y[idx_y]);
      idx_y++;
    }
  }
    return sorted_a;
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i<n; i++)
  cin >> a[i];
  vector<int> ans = merge_sort(a);
  cout << countt ;





  


 
  return 0;
}