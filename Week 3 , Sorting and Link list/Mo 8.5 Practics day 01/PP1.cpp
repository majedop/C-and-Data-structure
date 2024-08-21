#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{
  if(a.size() <= 1)
  return a;
  
  int mid = a.size()/2;
  vector<int> c;
  vector<int> b;

  for (int i = 0; i < mid; i++)
   b.push_back(a[i]);

   for (int i = mid; i < a.size(); i++)
   c.push_back(a[i]);
  
  vector<int>  sorted_b = merge_sort(b);
  vector<int> sorted_c = merge_sort(c);

  int indx_b = 0, indx_c= 0;
  vector<int> sorted_a;

  for (int i = 0; i < a.size(); i++)
  {
    if(indx_b == sorted_b.size())
    {
      sorted_a.push_back(sorted_c[indx_c]);
      indx_c++;
    }
    else if(indx_c == sorted_c.size())
    {
      sorted_a.push_back(sorted_b[indx_b]);
      indx_b++;
    }
    else if(sorted_b[indx_b] < sorted_c[indx_c])
    {
      sorted_a.push_back(sorted_c[indx_c]);
      indx_c++;
    }
    else
    {
      sorted_a.push_back(sorted_b[indx_b]);
      indx_b++;
    }
  }
  return sorted_a;  
  
}
int main()
{
  int n,m;
  cin >> n;
  vector <int> a;
  for (int i = 0; i <n; i++)
  {
    int input;
    cin >> input;
    a.push_back(input);
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int input;
    cin >> input;
    a.push_back(input);
  }

  vector<int> ans = merge_sort(a);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] <<" ";
  }
  
  

  
  
  

  return 0;
}