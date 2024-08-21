#include <bits/stdc++.h>
using namespace std;

class user
{
protected:
  string name;
  int roll;
  string clg_name;
};
class Admin : user
{
public:
  void set(string s, int r, string c)
  {
    name = s;
    roll = r;
    clg_name = c;
  }
  void print()
  {
    cout << "Name: " << name << "\n";
    cout << "Roll: " << roll << "\n";
    cout << "Institute: " << clg_name << "\n";
    cout<<"\n";
  }

};

int main()
{
  Admin ad,ad3;
  ad.set("Kazi Majedul Islam", 584431, "LPI");
  ad.print();

  ad3.set("Anter Mitra", 584440, "LPI");
  ad3.print();

  return 0;
}