#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  string s;
  cin >> s;
  stack<char> st;
  for (int i = 0; i < n; i++)
  {
    char ch = s[i];
    if (i == 0)
      st.push(ch);
    else
    {
      if (st.size() >= 1 && st.top() == '(' && ch == ')')
        st.pop();
      else
        st.push(ch);
    }
  }

  int open = 0, close = 0;
  while (!st.empty())
  {
    if (st.top() == '(')
      open++;
    else
      close++;

    st.pop();
  }

  if (open == 0 && close == 0 || open == 1 && close == 1)
    cout << "Yes"
         << "\n";
  else
    cout << "No"
         << "\n";

  return 0;
}