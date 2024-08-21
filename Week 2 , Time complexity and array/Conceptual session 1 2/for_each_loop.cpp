#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector <int> a;
  for (int i = 0; i < n; i++)
  {
    int input;
    cin >> input;
    a.push_back(input);
  }
  
  for(int value : a)
  {
    cout << value <<" ";
  }

  return 0;
}