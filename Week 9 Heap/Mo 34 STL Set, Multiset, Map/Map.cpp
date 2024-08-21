#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int > mp;
  
  
  mp["Mamar"] = 2;
  mp["Tomer"] = 1;
  mp["Amar"] = 4;
  mp["Babar"] = 3;
  
  for(auto it: mp)
  cout << it.first << " = " << it.second << "\n";

  return 0;
}