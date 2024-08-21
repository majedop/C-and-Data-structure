#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long int a, b;
  cin >> t;
  while (t--)
  {
    int div = 0, p = 0;
    cin >> a >> b;
    if (a % b == 0)
    {
      cout << 0 << "\n";
      continue;
    }

    div = a / b;
    p = (div + 1) * b;
    cout << p - a << "\n";
  }
}