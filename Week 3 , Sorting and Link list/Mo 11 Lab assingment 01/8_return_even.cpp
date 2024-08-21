#include <bits/stdc++.h>
using namespace std;

vector<int> even_generator(vector<int> a)
{
  vector<int> all_even;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] % 2 == 0)
      all_even.push_back(a[i]);
  }
  return all_even;
}
int main()
{
  vector<int> a = {4, 5, 6, 7, 8};
  vector<int> ans = even_generator(a);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}