#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double F, L, H, h;
  cin >> F >> L >> H >> h;

  double coteTriangle1 = F / 2;
  double coteTriangle2 = H - h;

  double hyp = sqrt(pow(coteTriangle1, 2) + pow(coteTriangle2, 2));

  cout << (hyp * L * 2);
}