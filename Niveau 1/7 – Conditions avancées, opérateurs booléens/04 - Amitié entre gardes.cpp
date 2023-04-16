#include <iostream>
using namespace std;
int main()
{
  int dDeb1, dFin1, dDeb2, dFin2;
  cin >> dDeb1 >> dFin1 >> dDeb2 >> dFin2;
  if (dFin1 < dDeb2 || dFin2 < dDeb1)
  {
    cout << "Pas amis";
  }
  else
  {
    cout << "Amis";
  }
}