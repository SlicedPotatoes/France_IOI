#include <iostream>
using namespace std;

int findP2(int n)
{
  int p2 = 1;
  while (n >= p2)
  {
    p2 *= 2;
  }
  return p2 / 2;
}

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  int p2 = findP2(n);
  if (n == 0)
  {
    cout << 0;
  }
  while (p2 != 0)
  {
    if (n % p2 != n)
    {
      n -= p2;
      cout << 1;
    }
    else
    {
      cout << 0;
    }
    p2 /= 2;
  }
}