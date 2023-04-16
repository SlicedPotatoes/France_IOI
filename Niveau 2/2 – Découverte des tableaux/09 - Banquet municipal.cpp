#include <iostream>
using namespace std;
int main()
{
  int nbTotalPos, nbChangement;
  cin >> nbTotalPos >> nbChangement;
  int pos[nbTotalPos];
  for (int i = 0; i < nbTotalPos; i++)
  {
    cin >> pos[i];
  }
  for (int i = 0; i < nbChangement; i++)
  {
    int p1, p2;
    cin >> p1 >> p2;
    int temp = pos[p1];
    pos[p1] = pos[p2];
    pos[p2] = temp;
  }
  for (int i = 0; i < nbTotalPos; i++)
  {
    cout << pos[i] << endl;
  }
}