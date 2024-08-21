#include <bits/stdc++.h>
using namespace std;

int n,k;
bool found= false;

void binary_search(vector<int> a)
{
  int low = 0, end = n-1;
  while (low <= end)
  {
    int mid = (low+end)/2;
    if(a[mid] == k)
    {
      if(a[mid-1] ==k)
      {
        found = true;
        break;
      }
      if(a[mid+1] == k)
      {
        found = true;
        break;
      }
    }
    if(a[mid] > k)
    end = mid-1;
    else
    low = mid+1;
  }
  
}
int main()
{
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  cin >> a[i];

  cin >> k;

  binary_search(a);
  if(found)
  cout <<"YES";
  else
  cout <<"NO";
  

  return 0;
}