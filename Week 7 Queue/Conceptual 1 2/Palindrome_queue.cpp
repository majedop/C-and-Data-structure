#include <bits/stdc++.h>
using namespace std;

int main()
{
  deque<char> dq;
  dq.push_back('a');
  dq.push_back('a');
  dq.push_back('b');
  dq.push_back('a');
  dq.push_back('a');
  dq.push_back('a');
  
  while (!dq.empty())
  {
    if(dq.front() == dq.back())
    {
      dq.pop_front();
      dq.pop_back();
    }
    else
    {
      break;
    }
  }
  if(dq.empty())
  {
    cout << "Palindrome";
  }
  else
  cout << "Not Palindrome";

  

  return 0;
}