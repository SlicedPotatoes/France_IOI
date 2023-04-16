#include <iostream>
using namespace std;
int main()
{
  int minX, maxX, minY, maxY, nbMaison, n = 0;
  cin >> minX >> maxX >> minY >> maxY >> nbMaison;
  for (int i = 0; i < nbMaison; i++)
  {
    int x, y;
    cin >> x >> y;
    if (minX <= x && maxX >= x && minY <= y && maxY >= y)
    {
      n++;
    }
  }
  cout << n;
}