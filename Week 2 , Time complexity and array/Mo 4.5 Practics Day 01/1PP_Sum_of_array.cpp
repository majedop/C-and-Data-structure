#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,sum=0;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum+= v[i];
  }
  cout << sum <<"\n";
  return 0;
}