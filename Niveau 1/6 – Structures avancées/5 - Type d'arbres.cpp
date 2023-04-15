#include <iostream>
using namespace std;
int main()
{
  int hauteur, folioles;
  cin >> hauteur >> folioles;
  if (hauteur <= 5 && folioles >= 8)
  {
    cout << "Tinuviel";
  }
  else if (hauteur >= 10 && folioles >= 10)
  {
    cout << "Calaelen";
  }
  else if (hauteur <= 8 && folioles <= 5)
  {
    cout << "Falarion";
  }
  else
  {
    cout << "Dorthonion";
  }
}