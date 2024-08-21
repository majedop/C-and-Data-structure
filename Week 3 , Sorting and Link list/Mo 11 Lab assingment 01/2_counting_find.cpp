#include <bits/stdc++.h>
using namespace std;

int n;
int Counting_sort(vector<int> a)
{
  vector<int> freq(n + 1);
  for (int i = 1; i <= n; i++)
    freq[i] = 0;

  for (int i = 0; i < n; i++)
    freq[a[i]]++;

  for (int i = 1; i <= n; i++)
  {
    if (freq[i] == 0)
      return i;
  }
}

int main()
{
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n - 1; i++)
  {
    int input;
    cin >> input;
    a.push_back(input);
  }

  int ans = Counting_sort(a);
  cout << ans;

  return 0;
}