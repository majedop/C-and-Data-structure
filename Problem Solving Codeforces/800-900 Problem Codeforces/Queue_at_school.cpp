#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  string s;
  cin >> n >> t >> s;
  while (t--)
  {
    for (int i = 1; i < n; i++)
    {
      if (s[i] == 'G' && s[i - 1] == 'B')
        swap(s[i-1], s[i]);
    }
  }
  cout << s <<"\n";

  return 0;
}