#include <bits/stdc++.h>
using namespace std;
int main()
{
  //I hate that I love that I hate it

  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    if(i%2==0)
    cout << "I love" <<" ";
    else
    cout <<"I hate" <<" ";
    if(i==a)
    {
      cout <<"it";
      break;
    }
    else
    {
      cout <<"that" <<" ";
    }
  }
  

  return 0;
}