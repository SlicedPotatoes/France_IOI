#include <iostream>
using namespace std;
int main()
{
  int nbLivres, nbJours;
  cin >> nbLivres >> nbJours;
  int livres[nbLivres] = {0};
  for (int jour = 0; jour < nbJours; jour++)
  {
    int nbClientsToday;
    cin >> nbClientsToday;
    for (int client = 0; client < nbClientsToday; client++)
    {
      int idLivre, duree;
      cin >> idLivre >> duree;
      if (livres[idLivre] == 0)
      {
        cout << 1 << endl;
        livres[idLivre] = duree;
      }
      else
      {
        cout << 0 << endl;
      }
    }
    for (int idLivre = 0; idLivre < nbLivres; idLivre++)
    {
      if (livres[idLivre] != 0)
      {
        livres[idLivre]--;
      }
    }
  }
}
