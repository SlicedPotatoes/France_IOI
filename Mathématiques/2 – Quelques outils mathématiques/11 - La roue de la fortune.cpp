#include <iostream>
using namespace std;
int main()
{
  int n, result;
  cin >> n;
  result = n % 24;
  if (result >= 0)
  {
    cout << result;
  }
  else
  {
    cout << 24 + result;
  }
}