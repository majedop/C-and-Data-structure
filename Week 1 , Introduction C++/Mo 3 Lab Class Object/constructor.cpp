#include <bits/stdc++.h>
using namespace std;

class student
{
public:
  string name;
  int std_id;
  int age;
  string father_name;
  string mother_name;
  
  student ()
  {
   
  }
  student(string nm, int id, int ag, string f_name, string m_name)
  {
    name = nm;
    std_id = id;
    age = ag;
    father_name = f_name;
    mother_name = m_name;
  }
  student(string nm, int id, int age)
  {
    name= nm;
    std_id= id;
    this->age= age;
  }
  void print()
  {
    cout << name <<" " << std_id <<" " << age << " " << father_name <<" " << mother_name <<"\n";
  }
};

int main()
{
  student e();
  student s ("Kazi Majedul", 54646, 23, "Majharul", "Tamanna");
  s.print();

  student s2("sdgj", 4564, 45);
  s2.print();
  
  return 0;
}