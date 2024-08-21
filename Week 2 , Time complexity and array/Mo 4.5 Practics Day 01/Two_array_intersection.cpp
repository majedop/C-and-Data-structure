#include <bits/stdc++.h>
using namespace std;

int main()
{
  int first_n, second_n;

  cin >> first_n;
  int A[first_n];
  for (int i = 0; i < first_n; i++)
  cin >> A[i];
  
  cin >> second_n;
  int B[second_n];
  for (int i = 0; i < second_n; i++)
   cin >> B[i];

  for (int i = 0; i < first_n; i++)
  {
    for (int j=0; j<second_n; j++)
    {
      if(A[i]==B[j])
      cout << A[i] <<" ";
    }
  }

  return 0;
}