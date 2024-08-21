#include <bits/stdc++.h>
using namespace std; 

int main()
{
  int n,k;
  cin >> n;
  set<int> st;
  vector<int> v1(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
    st.insert(v1[i]);
  }

  cin >> k;
  vector<int> v2(k);
  for (int i = 0; i < k; i++)
  cin >> v2[i];
  
  for (int i = 0; i < k; i++)
  {
    if(st.find(v2[i]) != st.end())
    cout << v2[i] << " ";
  }

  
  

  
  
  


  
   
  
  
}