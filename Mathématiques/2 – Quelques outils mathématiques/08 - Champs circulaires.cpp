#include <iostream>
#include <cmath>
using namespace std;

double perim(double rayon)
{
  return 2 * M_PI * rayon;
}
double aire(int rayon)
{
  return pow(rayon, 2) * M_PI;
}

int main()
{
  double sumAire = 0;
  double sumPerim = 0;
  int actualR = 3;
  for (int i = 0; i < 5; i++)
  {
    actualR += 3;
    double aireInterieur = aire(actualR);
    sumPerim += perim(actualR);
    actualR += 3;
    sumPerim += perim(actualR);
    double aireExterieur = aire(actualR);
    sumAire += aireExterieur - aireInterieur;
  }
  cout << round(sumAire) << endl
       << round(sumPerim);
}