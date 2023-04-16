#include <iostream>
using namespace std;
int main()
{
  int dDeb, dFin, nbGens, n = 0;
  cin >> dDeb >> dFin >> nbGens;
  for (int i = 0; i < nbGens; i++)
  {
    int d;
    cin >> d;
    if (d >= dDeb && d <= dFin)
    {
      n++;
    }
  }
  cout << n;
}