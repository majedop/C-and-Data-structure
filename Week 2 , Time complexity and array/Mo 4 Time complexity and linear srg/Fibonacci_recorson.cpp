#include <bits/stdc++.h>
using namespace std;

int called =0;
int fibo(int n)
{
  if(n==0)
  return 0;
  if(n==1)
  return 1;

  int x= fibo(n-1);
  called++;
  int y= fibo(n-2);
  called++;
  return x+y;
}
int main()
{
  int n;
  cin >> n;
  
  cout <<"Fibo= "<< fibo(n) << "\n";
  cout <<"Called= "<< called <<"\n";


  return 0;
}