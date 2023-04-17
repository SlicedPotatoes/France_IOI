#include <iostream>
using namespace std;
int main()
{
  int nbJours, nbNenuphars = 1;
  cin >> nbJours;
  for (int i = 0; i < nbJours; i++)
  {
    cout << nbNenuphars << endl;
    nbNenuphars *= 2;
  }
}