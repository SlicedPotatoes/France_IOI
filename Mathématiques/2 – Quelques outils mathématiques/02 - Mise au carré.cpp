#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int nombre;
  cin >> nombre;
  if (fmod(sqrt(nombre), 1) == 0)
  {
    cout << "Oui";
  }
  else
  {
    cout << "Non";
  }
}