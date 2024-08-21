#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int input;
    cin >> input;
    v.push_back(input); //
  }

  int lastElement = v.back(); //last elemnent return
  cout << lastElement <<"\n";

  v.pop_back(); // last element delete
  int size= v.size(); // find size

  for (int i = 0; i < size; i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}