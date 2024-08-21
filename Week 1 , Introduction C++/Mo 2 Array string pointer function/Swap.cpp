#include <bits/stdc++.h>
using namespace std;
void swap(char &x, char  &y)
{
  int temp= x;
  x=y;
  y=temp;
}
int main()
{
  char x, y;
  cin >> x >> y;
  swap(x, y);
  cout << x << " " << y;

  return 0;
}