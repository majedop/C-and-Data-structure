#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<long long int> a(n+1);
    for (int i = 0; i < n; i++)
    cin >> a[i];

     long long int ans = LONG_MAX;
    for (int i = 1; i < n; i++)
    {
      if(a[i] < a[i-1])
      {
        ans = 0;
        break;
      }
      ans = min(ans, (((a[i] -a[i-1])/2)+1));
    }
    cout << ans << "\n";  
  }
  
  return 0;

}