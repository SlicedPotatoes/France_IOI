#include <iostream>
using namespace std;

const int MAX_TYPE_PRODUIT = 10 * 1000 + 1;
int arr[MAX_TYPE_PRODUIT];
int nbTypeProduit;

int main()
{
  ios::sync_with_stdio(false);
  int nbOperations;
  cin >> nbTypeProduit;
  for (int i = 1; i <= nbTypeProduit; i++)
  {
    cin >> arr[i];
  }
  cin >> nbOperations;
  for (int i = 0; i < nbOperations; i++)
  {
    int idProduit, operation;
    cin >> idProduit >> operation;
    arr[idProduit] += operation;
  }
  for (int i = 1; i <= nbTypeProduit; i++)
  {
    cout << arr[i] << ' ';
  }
}