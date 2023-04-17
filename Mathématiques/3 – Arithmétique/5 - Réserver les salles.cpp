#include <iostream>
using namespace std;
int main()
{
  int elevesParSalle, nbEleves;
  cin >> elevesParSalle >> nbEleves;
  int nbSalles = nbEleves / elevesParSalle;
  if (nbEleves % elevesParSalle != 0)
  {
    nbSalles++;
  }
  cout << nbSalles;
}