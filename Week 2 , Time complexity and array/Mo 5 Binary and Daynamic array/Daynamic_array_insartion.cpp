#include <bits/stdc++.h>
using namespace std;

class Array
{
private:
  int *arr;
  int capcity;
  int user_size;

  void incrase_size()
  {
    capcity *= 2;
    int *temp = new int[capcity];

    for (int i = 0; i < user_size; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
  }

public:
  Array()
  {
    arr = new int[1];
    capcity = 1;
    user_size = 0;
  }

  void Push_back(int x)
  {
    if (capcity == user_size)
    {
      incrase_size();
    }
    arr[user_size] = x;
    user_size++;
  }

  void print()
{
  for(int i= 0; i< user_size; i++)
  cout << arr[i] << " ";
}
};
int main()
{
  Array a;
  a.Push_back(10);
  a.Push_back(20);
  a.Push_back(52);
  a.Push_back (21);

  a.print();

  return 0;
}