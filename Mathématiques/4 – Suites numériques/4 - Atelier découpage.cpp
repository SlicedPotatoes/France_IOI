#include <iostream>
using namespace std;
int main()
{
  int nbEtape, nbBlanc = 0, nbNoir = 1;
  cin >> nbEtape;
  for (int i = 0; i <= nbEtape; i++)
  {
    cout << nbBlanc << endl;
    nbBlanc += nbNoir;
    nbNoir *= 3;
  }
}