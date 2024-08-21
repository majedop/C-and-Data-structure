#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  long long int n;
  cin >> n;
  vector<long long int> a;
  a.resize(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int move=0;
  for (int i = 0; i < n-1; i++)
  {
    if(a[i]>a[i+1])
    move+=a[i]-a[i+1];
  }
  cout <<move << "\n";
  
  return 0;
}