#include <bits/stdc++.h>
using namespace std;

void Solve()
{
  int n, k;
  cin >> n >> k;
  string s1,s2;
  cin >> s1;
  cin >> s2;

  int s1_pair=0, s2_pair=0;
  for (int i = 0; i < n-1; i++)
  {
    if(s1[i] == s1[i+1])
    s1_pair++;
  }
  for (int i = 0; i < k-1; i++)
  {
    if(s2[i] == s2[i+1])
    s2_pair++;
  }
  
  if(s1_pair == 0 and s2_pair == 0)
  cout << "YES";
  else if(s1_pair >=1 and s2_pair >=1)
  cout << "NO";
  else if(s1_pair >= 2 || s2_pair >=2)
  cout << "NO";
  else
  {
    if(s1[n-1] == s2[k-1])
    cout << "NO";
    else
    cout << "YES";
  }
  cout << "\n";
  
  
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Solve(); 
  }
  

  return 0;
}