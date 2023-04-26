#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int convertToB10(vector<int> nb, int base)
{
  int base10 = 0;
  for (int i = 0; i < (int)nb.size(); i++)
  {
    base10 += nb[i] * (pow(base, (int)nb.size() - i - 1));
  }
  return base10;
}

void writeInAnyBase(int nb, int base)
{
  vector<int> v;
  while (nb > 0)
  {
    v.push_back(nb % base);
    nb /= base;
  }
  if (v.size() == 0)
  {
    cout << "0";
  }
  else
  {
    for (int i = (int)v.size() - 1; i >= 0; i--)
    {
      cout << v[i] << ' ';
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  int baseD, baseE, l;
  cin >> baseD >> baseE >> l;
  vector<int> nombres;
  for (int i = 0; i < l; i++)
  {
    int n;
    cin >> n;
    nombres.push_back(n);
  }
  int base10 = convertToB10(nombres, baseD);
  writeInAnyBase(base10, baseE);
}