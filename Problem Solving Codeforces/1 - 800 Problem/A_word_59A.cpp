#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  int up=0, low=0;
  for (int i = 0; i < s.size(); i++)
  {
    if(isupper(s[i]))
    up++;
    else
    
    low++;
  }
  
  if(up <= low)
  {
    for (int i = 0; i < s.size(); i++)
    {
      if(s[i]>='A' && s[i] <='Z')
      s[i]=s[i]+32;
    }
  }
  else
  {
    for (int i = 0; i < s.size(); i++)
    {
      if(s[i] >='a' && s[i] <='z')
      s[i]= s[i]-32;
    }
  }
  cout << s <<"\n";
  
  return 0;
}