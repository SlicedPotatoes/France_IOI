#include <iostream>
using namespace std;
int main()
{
  int nbLegumes;
  cin >> nbLegumes;
  for (int i = 0; i < nbLegumes; i++)
  {
    double poids, age, prix;
    cin >> poids >> age >> prix;
    cout << (prix / poids) << endl;
  }
}