#include <iostream>
using namespace std;
int main()
{
  int posDep;
  int longeur;
  int nbVendeur;
  cin >> posDep;
  cin >> longeur;
  cin >> nbVendeur;
  for (int i = 0; i <= nbVendeur; i++)
  {
    cout << (posDep + longeur * i) << endl;
  }
}