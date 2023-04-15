#include <iostream>
using namespace std;
int main()
{
  int myPos, nbVillages, nbProche = 0;
  cin >> myPos >> nbVillages;
  for (int i = 0; i < nbVillages; i++)
  {
    int posVillage;
    cin >> posVillage;
    if (myPos - 50 <= posVillage && myPos + 50 >= posVillage)
    {
      nbProche++;
    }
  }
  cout << nbProche;
}