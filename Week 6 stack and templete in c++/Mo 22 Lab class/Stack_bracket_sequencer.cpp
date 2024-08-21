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

    if (ch == '(' || ch == '{' || ch == '[')
    {
      st.push(ch);
    }
    else
    {
      if (st.empty())
      {
        cout << "Invalid"
             << "\n";
        return 0;
      }

      if (ch == ')' && st.top() == '(')
        st.pop();
      else if (ch == '}' && st.top() == '{')
        st.pop();
      else if (ch == ']' && st.top() == '[')
        st.pop();
      else
        {
          cout << "Invalid" << "\n";
          return 0;
        }
    }
  }
  if(st.empty())
  {
    cout << "Valid" <<"\n";
  }
  else
  cout << "Invalid" <<"\n";

  return 0;
}