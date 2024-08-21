#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  deque<int> dq;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    dq.push_back(in);
  }

  deque<int> ans;
  while (!dq.empty())
  {
    if (dq.front() < dq.back())
    {
      ans.push_back(dq.front());
      dq.pop_front();
    }
    else
    {
      ans.push_back(dq.back());
      dq.pop_back();
    }
  }

  while (!ans.empty())
  {
    cout << ans.front() << " ";
    ans.pop_front();
  }

  return 0;
}