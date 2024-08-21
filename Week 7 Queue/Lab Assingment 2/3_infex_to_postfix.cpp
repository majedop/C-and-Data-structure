#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
  return (c == '+' || c == '-' || c == '*' || c == '/');
}
int prec(char c)
{
  if (c == '+' || c == '-')
    return 1;
  if (c == '*' || c == '/')
    return 2;

  return 0;
}
int main()
{
  string s;
  cin >> s;
  string ans = "";
  stack<char> st;
  for (int i = 0; i < s.size(); i++)
  {
    char ch = s[i];
    if (ch >= 'a' && ch <= 'z')
    {
      ans += ch;
    }
    else if (ch == '(')
    {
      st.push(ch);
    }
    // find close bracket
    else if (ch == ')')
    {
      while (!st.empty() && st.top() != '(')
      {
        ans += st.top();
        st.pop();
      }
      if (!st.empty() && st.top() == '(')
      {
        st.pop();
      }
    }
    else if (isOperator(ch))
    {
      while (!st.empty() && prec(st.top()) >= prec(ch))
      {
        ans += st.top();
        st.pop();
      }
      st.push(ch);
    }
  }
  // baki ja thakbe ta add hobe
  while (st.size())
  {
    ans += st.top();
    st.pop();
  }
  cout << ans;

  return 0;
}