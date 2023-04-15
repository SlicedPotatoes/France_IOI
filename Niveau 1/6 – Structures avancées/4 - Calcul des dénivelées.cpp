#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n, sumPos = 0, sumNeg = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int nb;
    cin >> nb;
    if (nb == abs(nb))
    {
      sumPos += nb;
    }
    else
    {
      sumNeg -= nb;
    }
  }
  cout << sumPos << endl
       << sumNeg;
}