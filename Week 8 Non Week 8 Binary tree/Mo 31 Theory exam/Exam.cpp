#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  float float_data;
  char char_data;
  Node* next;
  Node* next_to_next;
};
void fun(int n)
{
	for(int i = 1 ; i <= n/2 ; i++)
{
	for(int j = 1 ; j <= n ; j = j + i)
	{
		cout<<i<<"-> "<<j <<" ";
	}
  cout << "\n";
}

}

int main()
{
	int n;
	cin>>n;
	fun(n);
}
