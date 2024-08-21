#include <bits/stdc++.h>
using namespace std;

class cuboid
{
private:
  int length;
  int width;
  int height;

public:
  cuboid()
  {

  }
  cuboid (int l, int w, int h)
  {
    length = l;
    width = w;
    height = h;
  }

  int getVolume()
  {
    return length*width*height;
  }
  int getSurfaceArea()
  {
    return (2*length*width)+(2*length*height)+(2*height*width);
  }


};

int main()
{
  cuboid volume(14,12,9);
  cout <<"Volume of cuboid= " << volume.getVolume() <<"cm"<<"\n\n";
  
  cuboid area1(8,6,5);
  cuboid area2(4,3,7);
  cuboid area4(18,13,15);
  cuboid area5(10,5,2);

  cout << "Surface Area = " <<area1.getSurfaceArea()<<"cm" <<" \n";
  cout << "Surface Area = " <<area2.getSurfaceArea()<<"cm" <<" \n";
  cout << "Surface Area = " <<area4.getSurfaceArea()<<"cm" <<" \n";
  cout << "Surface Area = " <<area5.getSurfaceArea()<<"cm" <<" \n";

      return 0;
}