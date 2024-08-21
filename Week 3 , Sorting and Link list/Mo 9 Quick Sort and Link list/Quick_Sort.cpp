#include  <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> a)
{
  if(a.size()<=1)
  return a;
  int pivot = a.size()-1;
   
   vector<int> L,R;
  for (int i = 0; i < pivot; i++)
  {
    if(a[i] <= a[pivot])
    L.push_back(a[i]);
    else
    R.push_back(a[i]);
  }

  vector<int> sorted_L = quick_sort(L);
  vector<int> sorted_R = quick_sort(R);
  
  vector<int> sorted_a;
  for (int i = 0; i < sorted_L.size(); i++)
  sorted_a.push_back(sorted_L[i]);

  sorted_a.push_back(a[pivot]);

  for (int i = 0; i < sorted_R.size(); i++)
  sorted_a.push_back(sorted_R[i]);

  return sorted_a;
  
}


int main()
{
  vector<int> a = {5,6,8,2,3,7,1,4};

  vector<int> ans = quick_sort(a);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  

  return 0;
}