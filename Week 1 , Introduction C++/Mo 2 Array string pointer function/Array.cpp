#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 int ans=0;
 for (int i = 0; i < n; i++)
 {
  if(arr[i]%2==0)
  ans+=arr[i];
 }
 cout << ans;
  return 0;
}