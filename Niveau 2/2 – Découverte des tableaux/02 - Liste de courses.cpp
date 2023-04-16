#include <iostream>
using namespace std;
int main()
{
  int prixKg[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
  int sum = 0;
  for (int i = 0; i < 10; i++)
  {
    int nbKg;
    cin >> nbKg;
    sum += prixKg[i] * nbKg;
  }
  cout << sum;
}