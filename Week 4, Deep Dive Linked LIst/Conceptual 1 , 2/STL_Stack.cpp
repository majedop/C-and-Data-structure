#include <bits/stdc++.h>
#include "MY_Stack.h"

int main()
{
  Stack numst;
  numst.PUSH(10);
  numst.PUSH(20);
  numst.PUSH(30);
  numst.PUSH(40);

  while (numst.EMPTY() == false)
  {
    cout << numst.TOP() <<" ";
     numst.POP();
  }
  
  

  return 0;
}