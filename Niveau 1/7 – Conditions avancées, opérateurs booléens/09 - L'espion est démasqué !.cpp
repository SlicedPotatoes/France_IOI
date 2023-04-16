#include <iostream>
using namespace std;
int main()
{
  int nbPer;
  cin >> nbPer;
  for (int i = 0; i < nbPer; i++)
  {
    int taille, age, poids, cheval, bruns, nbCrit = 0;
    cin >> taille >> age >> poids >> cheval >> bruns;
    if (taille >= 178 && taille <= 182)
    {
      nbCrit++;
    }
    if (age >= 34)
    {
      nbCrit++;
    }
    if (poids < 70)
    {
      nbCrit++;
    }
    if (cheval == 0)
    {
      nbCrit++;
    }
    if (bruns == 1)
    {
      nbCrit++;
    }

    if (nbCrit == 5)
    {
      cout << "Très probable" << endl;
    }
    else if (nbCrit == 0)
    {
      cout << "Impossible" << endl;
    }
    else if (nbCrit < 3)
    {
      cout << "Peu probable" << endl;
    }
    else
    {
      cout << "Probable" << endl;
    }
  }
}