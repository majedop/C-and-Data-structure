#include <bits/stdc++.h>
using namespace std;

int main()
{
  int page;
  cin >> page;
  int sum = 0, idx = -1;
  for (int i = 1; i <= 7; i++)
  {
    int in;
    cin >> in;
    sum += in;
    if (in == 0)
      continue;
    idx = i;
    if (sum >= page)
    {
      break;
    }
  }
  cout << idx << "\n";

  return 0;
}