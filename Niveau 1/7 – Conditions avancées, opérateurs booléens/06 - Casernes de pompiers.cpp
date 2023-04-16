#include <iostream>
using namespace std;
int main()
{
  int nbPaire;
  cin >> nbPaire;
  for (int i = 0; i < nbPaire; i++)
  {
    int minX1, maxX1, minY1, maxY1;
    int minX2, maxX2, minY2, maxY2;
    cin >> minX1 >> maxX1 >> minY1 >> maxY1;
    cin >> minX2 >> maxX2 >> minY2 >> maxY2;
    if (((maxX1 < minX2) || maxX1 == minX2) || ((maxX2 < minX1) || maxX2 == minX1))
    {
      cout << "NON" << endl;
    }
    else if (((maxY1 < minY2) || maxY1 == minY2) || ((maxY2 < minY1) || maxY2 == minY1))
    {
      cout << "NON" << endl;
    }
    else
    {
      cout << "OUI" << endl;
    }
  }
}