#include <iostream>
#include <string>

using namespace std;

const int MAX_LENGTH = 1000;
int arr[MAX_LENGTH][MAX_LENGTH];

int main()
{
  int H, L, D;
  cin >> H >> L >> D;
  // Remplir le tableau avec les informations de la map
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < L; j++)
    {
      cin >> arr[i][j];
    }
  }
  int indexHelper[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
  int currentX = 0, currentY = 0, count = 0;
  // Parcourir la map et s'arrété a la sortie (qui ce trouve en bas a droite)
  while (!(currentX == L - 1 && currentY == H - 1))
  {
    if (count % (D + 1) == D)
    {
      cout << currentY << ' ' << currentX << '\n';
    }
    // Pour chaque voisin du point current
    for (int i = 0; i < 4; i++)
    {
      int x = currentX + indexHelper[i][1], y = currentY + indexHelper[i][0];
      // Vérifier si la case ce trouve dans le tableau et n'est pas un mur
      if (x >= 0 && x < L && y >= 0 && y < H && arr[y][x] == 0)
      {
        arr[currentY][currentX] = 2;
        currentX = x;
        currentY = y;
        break;
      }
    }
    count++;
  }
  if (count % (D + 1) == D)
  {
    cout << currentY << ' ' << currentX << '\n';
  }
}