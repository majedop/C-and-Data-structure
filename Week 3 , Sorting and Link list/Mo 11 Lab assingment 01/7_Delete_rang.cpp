#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n+1);
  for (int i = 1; i <=n; i++)
  cin >> a[i];

  int start, end;
  cin >> start >> end;
  
   a.erase(a.begin()+start, a.begin()+end+1);

  for (int i = 1; i <a.size(); i++)
  {
    cout << a[i] <<" ";
  }
  
  return 0;
}