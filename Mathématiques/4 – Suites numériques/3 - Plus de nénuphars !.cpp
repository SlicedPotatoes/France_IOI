#include <iostream>
using namespace std;
int main()
{
  int nbJours, nbNenuphars = 0;
  cin >> nbJours;
  for (int i = 1; i <= nbJours; i++)
  {
    nbNenuphars += nbNenuphars + i;
    cout << nbNenuphars << endl;
  }
}