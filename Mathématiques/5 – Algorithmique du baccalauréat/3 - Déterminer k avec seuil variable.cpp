#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double seuil;
  cin >> seuil;
  int k = 2, i = 1;
  while (seuil * i < 1)
  {
    i *= 10;
  }

  while (i != 0)
  {
    while (log(k) / k >= seuil)
    {
      k += i;
    }
    k -= i;
    i /= 10;
  }
  cout << k + 1;
}