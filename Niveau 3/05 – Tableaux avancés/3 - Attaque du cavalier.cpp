#include <iostream>
#include <string>
using namespace std;

static const int PLATEAU_SIZE = 8;

int main()
{
  ios::sync_with_stdio(false);
  char plateau[PLATEAU_SIZE][PLATEAU_SIZE];                                         // Initialisé le plateau
  int posCavaliersB[PLATEAU_SIZE * PLATEAU_SIZE][2] = {{-1}}, nbCavaliersFound = 0; // Initialisé la position des cavaliers a -1
  for (int i = 0; i < PLATEAU_SIZE; i++)                                            // Remplir la grille et récupérer la position des cavaliers blanc
  {
    for (int j = 0; j < PLATEAU_SIZE; j++)
    {
      char c;
      cin >> c;
      plateau[i][j] = c;
      if (c == 'C')
      {
        posCavaliersB[nbCavaliersFound][0] = i;
        posCavaliersB[nbCavaliersFound][1] = j;
        nbCavaliersFound++;
      }
    }
  }
  int indexHelper[8][2] = {{-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}}; // Les déplacements qu'un cavalier peu faire
  for (int i = 0; i <= nbCavaliersFound; i++)                                                       // Pour chaque cavaliers
  {
    int y = posCavaliersB[i][0];
    int x = posCavaliersB[i][1];
    if (x == -1) // Si x == -1 ce cavalier n'existe pas, stoppé la boucle
    {
      break;
    }
    for (int j = 0; j < 8; j++) // Pour chaque déplacement que peu faire un cavalier, vérifié si il ce trouve sur un piont ennemie
    {
      int _y = y + indexHelper[j][0];
      int _x = x + indexHelper[j][1];
      bool validIndex = _y >= 0 && _y < PLATEAU_SIZE && _x >= 0 && _x < PLATEAU_SIZE;
      if (validIndex && isalpha(plateau[_y][_x]) && islower(plateau[_y][_x]))
      {
        cout << "yes";
        return 0;
      }
    }
  }
  cout << "no";
}
