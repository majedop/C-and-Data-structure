#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    list<int> l;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    int i = 0;
    while (i < n)
    {
      if (i == 0)
      {
        l.push_back(a[i]);
        i++;
      }
      else
      {
        if (a[i] < l.front())
          l.push_front(a[i]);
        else
          l.push_back(a[i]);

        i++;
      }
    }

    while (!l.empty())
    {
      cout << l.front() << " ";
      l.pop_front();
    }
    cout <<"\n";
  }

  return 0;
}