#include <bits/stdc++.h>
using namespace std;

class rectengle
{
  public:
  int width;
  int height;

  int area()
  {
    return width*height;
  }
  int peramiter()
  {
    return 2*(width+height);
  }
};
int main()
{
  rectengle a,a2;
  a.width=4;
  a.height=8;
  
  cout <<a.area()<<"\n";
  cout <<a.peramiter()<<"\n";

  a2.width=7;
  a2.height=5;

  cout <<a2.area()<<"\n";
  cout <<a2.peramiter()<<"\n";
  

  return 0;
}