#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int nb, base;
  cin >> nb >> base;
  vector<int> v;
  while (nb > 0)
  {
    v.push_back(nb % base);
    nb /= base;
  }
  if (v.size() == 0)
  {
    cout << "1\n0";
  }
  else
  {
    cout << v.size() << '\n';
    for (int i = (int)v.size() - 1; i >= 0; i--)
    {
      cout << v[i] << ' ';
    }
  }
}