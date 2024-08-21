#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  vector<pair<pair<string, string>, int>> v;
  for (int i = 0; i < n; i++)
  {
    string name, fathers_name;
    int roll;
    cin >> name >> fathers_name;
    cin >> roll;

    v.push_back({{name, fathers_name}, roll});
  }

  for (int i = 0; i < n; i++)
  {
    cout << "\nName: " << v[i].first.first << "\n";
    cout <<"Father name: " << v[i].first.second <<"\n";
    cout << "Roll: " << v[i].second << "\n";
  }

  return 0;
}