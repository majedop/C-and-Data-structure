#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  queue<string> q;
  q.push("1");
  for (int i = 1; i <=n; i++)
  {
    cout << q.front() <<"\n";
    string tm = q.front();
    q.pop();
    q.push(tm + "0");
    q.push(tm + "1");
  }
  

  return 0;
}