#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("in.txt");
    int x;
    float b;
    double c;
    ifs >> x >> b >> c;

    ofstream ofs;
    ofs.open("ou.txt");
    ofs << x << " " << b << " " << c << "\n";

    ifs.close();
    ofs.close();

    return 0;
}
