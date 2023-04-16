#include <iostream>
using namespace std;

int min(int n1, int n2)
{
  if (n1 > n2)
  {
    return n2;
  }
  return n1;
}

int main()
{
  int n1, n2;
  cin >> n1;
  for (int i = 0; i < 9; i++)
  {
    cin >> n2;
    n1 = min(n1, n2);
  }
  cout << n1;
}