#include <bits/stdc++.h>
using namespace std;

int func(int a, int b)
{
  return a+b;
}
namespace info
{
  int func(int a, int b)
  {
    return a*b;
  }
}

int main()
{
  int x= 50;
  int y=10;
  int ans= info:: func(x,y);
  cout << ans<< "\n";

  return 0;
}