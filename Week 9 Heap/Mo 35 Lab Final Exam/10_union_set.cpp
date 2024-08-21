#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  set<int> st;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    st.insert(in);
  }

  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int in;
    cin >> in;
    st.insert(in);
  }

  for (auto it : st)
    cout << it << " ";

  return 0;
}