#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int p, n0 = 1;
  cin >> p;
  while (pow(3, n0) + n0 - 1 < pow(10, p))
  {
    n0++;
  }
  cout << n0;
}