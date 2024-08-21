#include <bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin >> s;
 stack<char> st;
 for (int i = 0; i < s.size(); i++)
 {
  char ch = s[i];
  if(ch == '(' || ch == '{' || ch == '[')
  st.push(ch);
  else
  {
    if(st.empty())
    {
      cout << "NO" <<"\n";
      return 0;
    }
    if(st.top() == '(' && ch == ')')
    st.pop();
    else if(st.top() == '{' && ch == '}')
    st.pop();
    else if(st.top() == '[' && ch == ']')
    st.pop();
    else
    {
      cout << "NO" << "\n";
      return 0;
    }
  }
 }
 
 if(st.empty())
 cout << "YES" <<"\n";
 else
 cout << "NO" <<"\n";
  return 0;
}