#include <iostream>
using namespace std;
int main()
{
  int popTotal, popMalade = 1, nbJour = 1;
  cin >> popTotal;
  while (popMalade < popTotal)
  {
    popMalade *= 3;
    nbJour++;
  }
  cout << nbJour;
}