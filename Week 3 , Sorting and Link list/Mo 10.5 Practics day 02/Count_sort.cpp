#include <bits/stdc++.h>
using namespace std;

void count_sort(vector<int> a, int n)
{
  vector<int> freq(n);
  for (int i = 0; i < n; i++)
   freq[i] = 0;
  
  for (int i = 0; i < n; i++)
  {
    freq[a[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if(freq[i] >= 1)
    {
      for(int j = 0; j< freq[i]; j++)
      cout << i <<" ";
    }
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  count_sort(a,n);
  return 0;
}