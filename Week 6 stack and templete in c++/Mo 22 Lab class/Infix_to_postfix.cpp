#include <bits/stdc++.h>
using namespace std;

int prec(char ch)
{
  if(ch == '+' || ch == '-')
  {
    return 0;
  }
  return 1;
}

int main()
{
  string s;
  cin >> s;
  string ans = "";
  stack<char> st;
  for (int i = 0; i < s.size(); i++)
  {
    char ch  = s[i];
    if(ch >= 'a' && ch <= 'z')
    ans += ch;
    else
    {
      while (st.size() && prec(st.top()) >= prec(ch))
      {
        ans += st.top();
        st.pop();
      }
      st.push(ch);
    }
  }
  while (st.size())
  {
    ans +=st.top();
    st.pop();
  }
  cout << ans << "\n";
  return 0;
}