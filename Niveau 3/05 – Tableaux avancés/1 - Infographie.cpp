#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int nbLignes, nbColonnes, nbRectangles;
  cin >> nbLignes >> nbColonnes >> nbRectangles;

  char image[100][100];

  for (int i = 0; i < nbLignes; i++)
  {
    for (int j = 0; j < nbColonnes; j++)
    {
      image[i][j] = '.';
    }
  }

  for (int i = 0; i < nbRectangles; i++)
  {
    int iLig1, iCol1, iLig2, iCol2;
    char couleur;
    cin >> iLig1 >> iCol1 >> iLig2 >> iCol2 >> couleur;
    for (int iLig = iLig1; iLig <= iLig2; iLig++)
    {
      for (int iCol = iCol1; iCol <= iCol2; iCol++)
      {
        image[iLig][iCol] = couleur;
      }
    }
  }

  for (int i = 0; i < nbLignes; i++)
  {
    for (int j = 0; j < nbColonnes; j++)
    {
      cout << image[i][j];
    }
    cout << '\n';
  }
}
