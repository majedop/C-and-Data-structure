#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
    
  vector<int> ans;
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != arr[i + 1])
      ans.push_back(arr[i]);
  }

  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";

  return 0;
}