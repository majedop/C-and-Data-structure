#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> a = {7, 2, 1, 5, 4, 8, 3};
  for (int i = 0; i <(a.size()); i++)
    cout << a[i] << " ";
 
 cout<<"\n";
  sort(a.begin(), a.end());
  
  cout << "After sorting"<<"\n";
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  

  return 01;
}