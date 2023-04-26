#include <iostream>
using namespace std;

const int MAX_LENGTH = 100 * 1000;
const int MAX_HEIGHT = 1000 * 1000;

int arr[MAX_LENGTH];
int indexInsert = 0;

int main()
{
  ios::sync_with_stdio(false);
  int nombre;
  cin >> nombre;

  for (int i = 0; i < nombre; i++)
  {
    char type;
    cin >> type;
    if (type == 'C')
    {
      int hauteur;
      cin >> hauteur;

      while (indexInsert > 0 && arr[indexInsert - 1] <= hauteur)
      {
        indexInsert--;
      }
      arr[indexInsert] = hauteur;
      indexInsert++;
    }
    else
    {
      cout << indexInsert << '\n';
    }
  }
}