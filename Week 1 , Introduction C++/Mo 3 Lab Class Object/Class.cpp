#include <bits/stdc++.h>
using namespace std;

class student
{
public:
  string name;
  int roll;
  string father_name;
  string mother_name;

  void print_information()
  {
    cout << "Name: " << name << "\n";
    cout << "Roll: " << roll << "\n";
    cout << "Father Name: " << father_name << "\n";
    cout << "Mother Name: " << mother_name << "\n";
    cout << "\n";
  }
};
int main()
{
  student s1, s2;
  s1.name = "Kazi Majedul Islam";
  s1.roll = 344583;
  s1.father_name = "Kazi Majaharul Islam";
  s1.mother_name = "Ferdaus Tamannah";

  cout << "Student 1 information"
       << "\n";
  s1.print_information();

  s2.name = "Kowser Hamid";
  s2.roll = 344583;
  s2.father_name = "Moftofa Rahman";
  s2.mother_name = "Kulsuma Begam";

  cout << "Student 2 Information"
       << "\n";
  s2.print_information();

  return 0;
}