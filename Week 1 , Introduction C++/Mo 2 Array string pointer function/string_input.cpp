#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin>> s;
  cout <<s << endl;
  s.erase(s.begin()+0);
  s.pop_back();
  cout <<s;

  return 0;
}