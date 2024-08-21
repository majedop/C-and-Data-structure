#include <bits/stdc++.h>
using namespace std;

class student 
{
  public:
  string name;
  int roll;
  int age;

  student()
  {

  }
  student(string name, int roll, int age)
  {
    this->name= name;
    this->roll =roll;
    this->age= age;
  }

  void display()
  {
    cout << name << " " << roll <<" " << age <<"\n";
  }

};

int main()
{
  student s[10];
  for (int i = 0; i < 10; i++)
  {
    s[i]= student ("A", i, i+22);
    s[i].display();
  }
  

  return 0;
}