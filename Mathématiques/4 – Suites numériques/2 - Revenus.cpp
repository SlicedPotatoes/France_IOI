#include <iostream>
using namespace std;
int main()
{
  int somme, benef, nbMois;
  cin >> somme >> benef >> nbMois;
  for (int i = 0; i < nbMois; i++)
  {
    cout << somme << endl;
    somme += benef;
  }
}