#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int baseDepart, length, base10 = 0;
  cin >> baseDepart >> length;
  for (int i = 0; i < length; i++)
  {
    int n;
    cin >> n;
    base10 += n * (pow(baseDepart, length - i - 1));
  }
  cout << base10;
}