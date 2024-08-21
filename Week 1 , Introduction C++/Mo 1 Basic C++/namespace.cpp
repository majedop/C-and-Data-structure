#include <iostream>

using namespace std;
int x = 50;
int func(int a, int b)
{
  int s = a + b;
  return s;
}
namespace info
{
 int x=10;
}
int main()
{
  cout <<info:: x << "\n";

  return 0;
}