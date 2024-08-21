#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector < int > a;
  for (int i = 0; i < n; i++)
  {
    int input;
    cin >> input;
    a.push_back(input);
  }

  sort(a.rbegin(), a.rend());
  for(auto val: a)
  {
    cout << val <<" ";
  }
  
  
  return 0;
}