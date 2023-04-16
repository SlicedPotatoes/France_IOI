#include <iostream>
using namespace std;

int suite(int n)
{
  if (n % 2 == 0)
  {
    return n / 2;
  }
  return n * 3 + 1;
}

int main()
{
  int n;
  cin >> n;
  while (n != 1)
  {
    n = suite(n);
    cout << n << " ";
  }
}