#include <iostream>
using namespace std;

const int MAX_LENGTH = 128;

int **initArr(int h)
{
  int **arr = new int *[MAX_LENGTH];
  for (int i = 0; i < h; i++)
  {
    arr[i] = new int[MAX_LENGTH];
    for (int j = 0; j < h; j++)
    {
      arr[i][j] = 0;
    }
  }
  return arr;
}

int **fractale(int longeur, int **f, int actualSize)
{
  if (longeur == 1)
  {
    int **a = new int *[1];
    a[0] = new int[1]{1};
    return a;
  }
  if (longeur == actualSize)
  {
    return f;
  }
  int **frac = initArr(actualSize * 2);
  for (int i = 0; i < actualSize; i++)
  {
    for (int j = 0; j < actualSize; j++)
    {
      if (f[i][j] == 1)
      {
        frac[i * 2][j * 2] = 1;
        frac[i * 2][j * 2 + 1] = 1;
        frac[i * 2 + 1][j * 2] = 1;
      }
      else
      {
        frac[i * 2][j * 2] = 0;
        frac[i * 2][j * 2 + 1] = 0;
        frac[i * 2 + 1][j * 2] = 0;
      }
      frac[i * 2 + 1][j * 2 + 1] = 0;
    }
  }
  return fractale(longeur, frac, actualSize * 2);
}

int main()
{
  ios::sync_with_stdio(false);
  int nb;
  cin >> nb;
  int **modele = new int *[2]
  {
    new int[2]{1, 1},
        new int[2] { 1, 0 }
  };

  int **f = fractale(nb, modele, 2);
  for (int i = 0; i < nb; i++)
  {
    for (int j = 0; j < nb; j++)
    {
      if (f[i][j] == 1)
      {
        cout << '#';
        continue;
      }
      cout << ' ';
    }
    cout << '\n';
  }
}