#include <iostream>
#include <cmath>
using namespace std;

#define distance sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
int main()
{
  int x1, y1, nbFleurs, count = 0;
  cin >> x1 >> y1 >> nbFleurs;
  for (int i = 0; i < nbFleurs; i++)
  {
    int x2, y2;
    cin >> x2 >> y2;
    if (distance < 1000)
    {
      count++;
    }
  }
  cout << count;
}