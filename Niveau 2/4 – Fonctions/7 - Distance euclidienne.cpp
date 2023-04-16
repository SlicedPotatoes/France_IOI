#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
  double dx = pow(x2 - x1, 2);
  double dy = pow(y2 - y1, 2);
  return sqrt(dx + dy);
}

int main()
{
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << distance(x1, y1, x2, y2);
}