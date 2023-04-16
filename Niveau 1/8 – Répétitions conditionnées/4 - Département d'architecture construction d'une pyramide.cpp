#include <iostream>
using namespace std;
int main()
{
  int nbPierreMax, nbPierre = 0, etage = 0;
  cin >> nbPierreMax;
  while (nbPierreMax >= nbPierre)
  {
    etage++;
    nbPierre += etage * etage;
  }
  nbPierre -= etage * etage;
  if (etage > 0)
  {
    etage--;
  }
  cout << (etage) << endl
       << nbPierre;
}