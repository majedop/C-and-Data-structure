#include <bits/stdc++.h>
using namespace std;

class MyClass
{
public:
  string name;
  string father_name;
  string mother_name;

  MyClass(string name, string father_name, string mother_name)
  {
    this->name = name;
    this->father_name = father_name;
    this->mother_name = mother_name;
  }

  void display()
  {
    cout <<name << " " << father_name <<" " << mother_name <<"\n";
  }
  ~MyClass()
  {
    cout << "Called Distructor"<<"\n";
  }

};

int main()
{
  MyClass *p = new MyClass ("A", "B", "C");
  (*p).display();

  return 0;
}