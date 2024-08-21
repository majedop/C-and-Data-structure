#include <bits/stdc++.h>
using namespace std;

class student
{
private:
  int roll;
  string name;
  string father_name;

public:
  void set_information(int r, string n, string f)
  {
    roll = r;
    name = n;
    father_name = f;
  }

  void print_information()
  {
    cout << roll << " " << name << " " << father_name << "\n";
  }
};

int main()
{
  student s, s2;
  s.set_information(342, "Majedul", "Majharul");
  s2.set_information(34, "Kowser", "edsajgd");
  
  s.print_information();
  s2.print_information();
  return 0;
}