#include <bits/stdc++.h>
using namespace std;
int main()
{
  int f_n,s_n;
  cin >> f_n;
  int A[f_n];
  
  for (int i = 0; i < f_n; i++)
    cin >> A[i];
  
  cin >> s_n;
  int B[s_n];
  for (int i = 0; i < s_n; i++)
  cin >> B[i];

  for (int i = 0; i < f_n; i++)
  {
    cout <<A[i] <<" ";
  }

  for (int i = 0; i < f_n; i++)
  {
    int flag=1;
    for(int j=0; j< s_n; j++)
    {
      if(A[i]!=B[j])
       {
        flag= 0;
       }
    }
    if(flag==0)
    cout << B[i] <<" ";
  }
  
  
  
  

  return 0;
}