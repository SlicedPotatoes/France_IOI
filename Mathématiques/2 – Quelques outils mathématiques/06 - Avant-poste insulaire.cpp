#include <iostream>
#include <cmath>
using namespace std;

#define perimetre round(M_PI *diam)
#define aire round(pow(diam / 2, 2) * M_PI);

int main()
{
  double diam;
  cin >> diam;

  cout << perimetre << endl
       << aire;
}