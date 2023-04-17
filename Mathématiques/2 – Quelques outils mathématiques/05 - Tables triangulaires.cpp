#include <iostream>
#include <cmath>
using namespace std;

#define z sqrt(pow(x, 2) + pow(y, 2))

int main()
{
  int longueurMax;
  cin >> longueurMax;
  for (int x = 1; x <= longueurMax; x++)
  {
    for (int y = 1; y <= longueurMax; y++)
    {
      double _z = z;
      if (fmod(_z, 1) == 0 && x < y && y < _z && _z <= longueurMax)
      {
        cout << x << " " << y << " " << _z << endl;
      }
    }
  }
}