#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  double S = 0;
  for (double k = 1; k <= n; k++)
  {
    S += 1 / k;
  }
  cout << S - log(n);
}