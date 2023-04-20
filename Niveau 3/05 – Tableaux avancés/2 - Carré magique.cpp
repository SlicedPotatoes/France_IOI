#include <iostream>
using namespace std;

static const int MAX_SIZE = 20;

int main()
{
  ios::sync_with_stdio(false);
  int size, nombreMagique = 0;
  bool verifDouble[MAX_SIZE * MAX_SIZE + 1] = {false};
  cin >> size;
  int verifCol[MAX_SIZE] = {0};
  int verifLig[MAX_SIZE] = {0};
  int verifDiag1 = 0;
  int verifDiag2 = 0;
  for (int i = 0; i < size; i++) // Fill la grid, calculé le nombre magique, vérifié les doublons et remplir le tableau pour vérifié les colonnes / lignes
  {
    for (int j = 0; j < size; j++)
    {
      int n;
      cin >> n;
      if (n <= 0 || n > size * size) // Vérifié si le nombre se trouve dans l'intervale 1 --> size * size
      {
        cout << "no";
        return 0;
      }
      if (i == 0) // Calculé le nombre magique si i == 0
      {
        nombreMagique += n;
      }
      if (verifDouble[n - 1]) // Si doublon stopper l'algorithme
      {
        cout << "no";
        return 0;
      }
      if (i == j)
      {
        verifDiag1 += n; // Additionner le nombre a verifDiag1 si il fait partie de la diag1
      }
      if (i + j == size - 1)
      {
        verifDiag2 += n; // Additionner le nombre a verifDiag2 si il fait partie de la diag2
      }
      verifDouble[n - 1] = true; // Ajouter le nombre a la liste qui verifie les doublons
      verifCol[j] += n;          // Additionner le nombre a verifCol[j]
      verifLig[i] += n;          // Additionner le nombre a verifLig[i]
    }
  }

  if (verifDiag1 != nombreMagique || verifDiag2 != nombreMagique) // Verifié les diagonale
  {
    cout << "no";
    return 0;
  }

  for (int i = 0; i < size; i++) // Verifié les lignes et colonnes
  {
    int ligne = verifLig[i];
    int col = verifCol[i];
    if (ligne != nombreMagique || col != nombreMagique)
    {
      cout << "no";
      return 0;
    }
  }

  cout << "yes";
}
