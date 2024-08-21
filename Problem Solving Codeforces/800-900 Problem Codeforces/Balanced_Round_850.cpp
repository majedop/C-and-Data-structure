#include <bits/stdc++.h>
using namespace std;

vector<long long int> Merge_sort(vector<long long int> a)
{
  if (a.size() <= 1)
    return a;
  int mid = a.size() / 2;
  vector<long long int> b, c;
  for (int i = 0; i < mid; i++)
    b.push_back(a[i]);

  for (int i = mid; i < a.size(); i++)
    c.push_back(a[i]);

  vector<long long int> sorted_b = Merge_sort(b);
  vector<long long int> sorted_c = Merge_sort(c);

  vector<long long int> sorted_a;
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
  return sorted_a;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  { 
    long long int n,k;
    cin >> n >> k;

    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    cin >> a[i];

    vector<long long int> ans = Merge_sort(a);
    int countt=0;
    for (int i = 1; i < ans.size(); i++)
    {
      if((ans[i] - ans[i-1]) <= k)
      countt++;
    }
    cout << countt <<"\n";

    
    
    
  }
  

  return 0;
}