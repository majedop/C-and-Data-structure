#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int size = s.size();
  for (int i = 0; i < size; i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] += 32;
  }

  for (int i = 0; i < size; i += 2)
  {
    if (s[i] != 'z')
      s[i] += 1;
    else
      s[i] -= (26 - 1);
  }
  cout << s;

  return 0;
}