#include <iostream>
#include <cmath>
using namespace std;

double round5(double n)
{
  return round(n * 100000) / 100000;
}

int main()
{
  double a, b;
  cin >> a >> b;
  while (round5(a) != round5(b))
  {
    double _a = (a + b) / 2;
    b = sqrt((pow(a, 2) + pow(b, 2)) / 2);
    a = _a;
  }
  cout << round5(a) << endl
       << round5(b);
}