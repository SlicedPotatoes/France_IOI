#include <iostream>
using namespace std;
int main()
{
  int nbCrapauds, nbCouleuvres, nbAnnees;
  cin >> nbCrapauds >> nbCouleuvres >> nbAnnees;
  for (int i = 0; i < nbAnnees; i++)
  {
    cout << nbCrapauds << " " << nbCouleuvres << endl;
    int tempnbCrapauds = 3 * nbCrapauds - 2 * nbCouleuvres;
    nbCouleuvres = nbCrapauds - nbCouleuvres;
    nbCrapauds = tempnbCrapauds;
  }
}