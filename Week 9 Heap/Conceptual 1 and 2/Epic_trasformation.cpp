#include <bits/stdc++.h>
using namespace std;

void Solve()
{
  int n;
  cin >> n;
  map<int, int> cnt;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    cnt[in]++;
  }

  priority_queue<int> pq;
  for (auto it : cnt)
    pq.push(it.second);

  int prev = 0, next = 0, ans = 0;
  while (pq.size() >= 2)
  {
    prev = pq.top();
    pq.pop();
    next = pq.top();
    pq.pop();
    prev--, next--;

    if (prev != 0)
      pq.push(prev);
    if (next != 0)
      pq.push(next);
  }

  while (!pq.empty())
  {
    ans += pq.top();
    pq.pop();
  }

  cout << ans << "\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Solve();
  }

  return 0;
}