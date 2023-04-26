#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int N, puissanceDe2 = 2;
  cin >> N;
  while (N % puissanceDe2 != N)
  {
    puissanceDe2 *= 2;
  }
  cout << puissanceDe2 / 2;
}