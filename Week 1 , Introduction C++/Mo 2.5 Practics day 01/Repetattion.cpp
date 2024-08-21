#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n = 26;
  int arr[n + 1];
  for (int i = 1; i <= n; i++)
    arr[i] = 0;

  string s;
  cin >> s;
  int size= s.size();
  for (int i = 0; i <size; i++)
  {
    if(s[i]>='a' && s[i]<='z')
    s[i]-=32;
  }
  
  for (int i = 0; i <size; i++)
    arr[(s[i] - 'A') + 1]++;

  int max = arr[1];
  for (int i = 1; i <= n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  cout << max;

  return 0;
}