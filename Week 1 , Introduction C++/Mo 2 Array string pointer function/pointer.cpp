#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x=40;
  int* ad=&x;
  int p=*ad;
  cout <<x<<"\n";
  cout << ad<<"\n";
  cout << p<<"\n";
  cout <<*ad<<"\n";

  return 0;
}