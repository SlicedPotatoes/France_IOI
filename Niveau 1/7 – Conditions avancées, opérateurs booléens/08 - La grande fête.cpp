#include <iostream>
using namespace std;
int main()
{
  int dDeb, dFin, nbInv, invSuspect = 0;
  cin >> dDeb >> dFin >> nbInv;
  for (int i = 0; i < nbInv; i++)
  {
    int dArr, dDep;
    cin >> dArr >> dDep;
    if (!(dDep < dDeb || dArr > dFin))
    {
      invSuspect++;
    }
  }
  cout << invSuspect;
}