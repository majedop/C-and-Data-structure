#include <bits/stdc++.h>
using namespace std;
void first_last_delete(string &s)
{
  s.erase(s.begin()+0);
  s.pop_back();
}

int main()
{
  string s;
  cin >> s;
  first_last_delete(s);

  cout<<s<<"\n";
  
  return 0;
}