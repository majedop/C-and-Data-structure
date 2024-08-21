#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "This is a sample text is a text lol hi text is text";
  stringstream dd(s);
  string word;
  map<string, int> mp;

  while (dd >> word)
  {
    mp[word]++;
  }

  int maxCount = 0;
  string most_occur;
  for (auto it : mp)
  {
    if (it.second > maxCount)
    {
      maxCount = it.second;
      most_occur = it.first;
    }
  }
  cout << "Maximum occurring word is > " << most_occur 
  << " < Occurring " << maxCount << " times.";

  return 0;
}