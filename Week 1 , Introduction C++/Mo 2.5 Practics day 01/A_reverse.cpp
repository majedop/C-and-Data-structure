#include <bits/stdc++.h>
using namespace std;

int main()
{
  int L,R;
  cin >> L >> R;
  string s;
  cin >> s;
  
  reverse(s.begin()+(L-1), s.begin()+R);
  cout << s;

  return 0;
}