#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int k = 2;
  double value = log(k) / k;
  while (value > pow(10, -2))
  {
    k++;
    value = log(k) / k;
  }
  cout << k;
}