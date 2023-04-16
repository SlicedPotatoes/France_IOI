#include <iostream>
#include <string>
using namespace std;
int main()
{
  string nom;
  cin >> nom;
  char firstChar = nom[0];
  if (firstChar >= 'A' && firstChar <= 'F')
  {
    cout << 1;
  }
  else if (firstChar >= 'G' && firstChar <= 'P')
  {
    cout << 2;
  }
  else
  {
    cout << 3;
  }
}