#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  int a,b,mul=0;
  a=s[0]-'0';
  b=s[2]-'0';

  mul=a*b;
  cout << mul;

  return 0;
}