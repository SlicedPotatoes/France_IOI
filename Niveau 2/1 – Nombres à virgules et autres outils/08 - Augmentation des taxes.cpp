#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double taxeActuel, taxeNouvelle, prixTTC;
  cin >> taxeActuel >> taxeNouvelle >> prixTTC;
  double ht = prixTTC / (1 + (taxeActuel / 100));
  cout << round(((ht + (ht * taxeNouvelle / 100)) * 100)) / 100;
}