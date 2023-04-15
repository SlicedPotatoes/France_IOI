#include <iostream>
using namespace std;
int main()
{
  int nbLieux, nbVilles = 0;
  cin >> nbLieux;
  for (int i = 0; i < nbLieux; i++)
  {
    int pop;
    cin >> pop;
    if (pop > 10000)
    {
      nbVilles++;
    }
  }
  cout << nbVilles;
}