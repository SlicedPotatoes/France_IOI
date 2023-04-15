#include <iostream>
using namespace std;
int main()
{
  int nbMaison, minX = 1000000, maxX = 0, minY = 1000000, maxY = 0;
  cin >> nbMaison;
  for (int i = 0; i < nbMaison; i++)
  {
    int x, y;
    cin >> x >> y;
    if (x < minX)
    {
      minX = x;
    }
    if (x > maxX)
    {
      maxX = x;
    }
    if (y < minY)
    {
      minY = y;
    }
    if (y > maxY)
    {
      maxY = y;
    }
  }
  int diffX = maxX - minX, diffY = maxY - minY;
  cout << (diffX * 2 + diffY * 2);
}