#include <iostream>
#include <string>
using namespace std;
int main()
{
  int nbLignes, nbMots;
  cin >> nbLignes >> nbMots;
  int frequence[101] = {0};
  for (int i = 0; i < nbLignes; i++)
  {
    for (int j = 0; j < nbMots; j++)
    {
      string mot;
      cin >> mot;
      int longeur = (int)mot.length();
      frequence[longeur]++;
    }
  }
  for (int i = 0; i < 101; i++)
  {
    int f = frequence[i];
    if (f > 0)
    {
      cout << i << " : " << f << endl;
    }
  }
}