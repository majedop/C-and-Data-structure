#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n ;
  cin >> n;
  long long int arr[n];
  int sum = 0, sum2= 0, cnt=0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum+= arr[i];
  }
  sum /=2;
  sort(arr, arr+n);
  for(int i = n-1; i>=0; i--)
  {
    sum2+=arr[i];
    cnt++;
    if(sum2 > sum)
    break;
  }
  cout << cnt <<"\n";
  
return 0;
}