#include <iostream>
using namespace std;
int main()
{
  int f1, f2, diff;
  cin >> f1 >> f2;
  diff = f1 - f2;
  if (diff > 10 || diff < -10)
  {
    if (f1 > f2)
    {
      cout << "La famille Arignon a un champ trop grand";
    }
    else
    {
      cout << "La famille Evaran a un champ trop grand";
    }
  }
}