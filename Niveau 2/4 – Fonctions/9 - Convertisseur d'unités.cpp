#include <iostream>
using namespace std;

#define convertToPied valueToConvert / 0.3048
#define convertToLivre valueToConvert * 0.002205
#define convertToFahrenheit 32 + (1.8 * valueToConvert)

int main()
{
  int nbValue;
  cin >> nbValue;
  for (int i = 0; i < nbValue; i++)
  {
    double valueToConvert;
    char unit;
    cin >> valueToConvert >> unit;
    if (unit == 'm')
    {
      cout << convertToPied << " p" << endl;
    }
    else if (unit == 'g')
    {
      cout << convertToLivre << " l" << endl;
    }
    else
    {
      cout << convertToFahrenheit << " f" << endl;
    }
  }
}