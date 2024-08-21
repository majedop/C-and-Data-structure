#include <bits/stdc++.h>
using namespace std;

vector<int> coin = {1,3,4};
int coin_change(int n)
{
  if(n==0)
  return 0;
  int ans=10000000000000;
  for (int i = 0; i < coin.size(); i++)
  {
    if(n>=coin[i])
      ans = min(ans, 1+coin_change(n-coin[i])); 
  }
  return ans;

}
int main()
{
  int n;
  cin >> n;
  cout << coin_change(n);

  return 0;
}