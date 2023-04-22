#include <iostream>
using namespace std;

const int MAX_ELEMENTS = 1000 * 1000 + 1;
bool registre[MAX_ELEMENTS];

int main()
{
  ios::sync_with_stdio(false);
  int length;
  cin >> length;
  for (int i = 0; i < length; i++)
  {
    int element;
    cin >> element;
    if (registre[element])
    {
      cout << element;
      return 0;
    }
    registre[element] = true;
  }
  cout << -1;
}
