#include <bits/stdc++.h>
using namespace std;

class myclass
{
public:
  string name;
  int roll;
  int age;

  myclass(string s, int r, int a)
  {
    name = s;
    roll = r;
    age = a;
  }

  myclass()
  {
    cout <<"Program End" << "\n";
  }

  void display()
  {
    cout << name << "\n";
    cout << roll << " \n";
    cout << age << "\n";
  }

};
int main()
{
  
  myclass s1("Kazi Majedul Islam", 584431, 22);
  myclass s2("Anter Mitra", 584440, 20);
  
  s1.display();
  s2.display();
  myclass s3;

  return 0;
}