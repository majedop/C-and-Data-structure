#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "bangladesh";

  s.erase(s.begin() + 0);
  s.pop_back();
  
  cout << s << "\n";
  cout <<s.size();
  return 0;
}