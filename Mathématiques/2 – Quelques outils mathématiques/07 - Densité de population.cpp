#include <iostream>
#include <cmath>
using namespace std;

double aire(double rayon)
{
  return pow(rayon, 2) * M_PI;
}

int main()
{
  double r1, r2, pop;
  cin >> r1 >> r2 >> pop;

  double aireR1 = aire(r1), aireR2 = aire(r2);
  double aireQuartier = aireR2 - aireR1;

  cout << round((pop / aireQuartier) * 100) / 100;
}