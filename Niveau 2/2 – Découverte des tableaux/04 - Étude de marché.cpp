#include <iostream>
using namespace std;
int main()
{
  int nbProduits, nbPersonnes;
  cin >> nbProduits >> nbPersonnes;
  int produits[nbProduits] = {0};
  for (int i = 0; i < nbPersonnes; i++)
  {
    int produit;
    cin >> produit;
    produits[produit]++;
  }
  for (int i = 0; i < nbProduits; i++)
  {
    cout << produits[i] << endl;
  }
}