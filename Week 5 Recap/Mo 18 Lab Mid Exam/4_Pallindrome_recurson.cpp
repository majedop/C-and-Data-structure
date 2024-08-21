#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string s, int start, int end)
{
  if (end - start == 1 || start == end)
    return 1;
  else
  {
    if (s[start] == s[end])
      return isPalindrome(s, start + 1, end - 1);
    else
      return 0;
  }
}
int main()
{
  string s;
  cin >> s;
  int sz = s.size();
  if (isPalindrome(s, 0, sz - 1))
  cout << "YES" <<"\n";
  else
  cout <<"NO" <<"\n";

  return 0;
}