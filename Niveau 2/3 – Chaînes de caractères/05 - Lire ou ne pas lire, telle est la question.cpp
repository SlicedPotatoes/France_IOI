#include <iostream>
#include <string>
using namespace std;
int main()
{
  int nbLivres, min = 0;
  cin >> nbLivres;
  cin.ignore();
  for (int i = 0; i < nbLivres; i++)
  {
    string titre;
    getline(cin, titre);
    int longeur = (int)titre.length();
    if (longeur > min)
    {
      min = longeur;
      cout << titre << endl;
    }
  }
}