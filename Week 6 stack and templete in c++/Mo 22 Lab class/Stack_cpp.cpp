#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  cout << st.size() << "\n";
  
  cout << st.top() << " ";
  st.pop();
  cout << st.top() <<" ";
  st.pop();
  cout << st.top() <<" ";
  st.pop();
  cout << st.top() <<" ";
  st.pop();
  cout <<"\n";
  cout << st.size();

  return 0;
}