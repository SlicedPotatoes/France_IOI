#include <iostream>

using namespace std;

const int MAX_ELEVE = 250 * 1000;
int arr[MAX_ELEVE];
int index = 0;
int actuelPlusPetit = 1;

int rechercheDichotomique(int x)
{
  int i = 0;
  int j = index - 1;
  while (i <= j)
  {
    int mid = (i + j) / 2;
    if (arr[mid] == x)
    {
      return -1;
    }
    else if (arr[mid] < x)
    {
      i = mid + 1;
    }
    else
    {
      j = mid - 1;
    }
  }
  return i;
}
void addElement(int n)
{
  int pos = rechercheDichotomique(n);
  for (int k = index - 1; k >= pos; k--)
  {
    arr[k + 1] = arr[k];
  }
  arr[pos] = n;
  index++;
}

int main()
{
  ios::sync_with_stdio(false);
  int N, P;
  cin >> N >> P;

  for (int i = 0; i < P; i++)
  {
    int idEleve;
    cin >> idEleve;
    addElement(idEleve);
    while (idEleve == actuelPlusPetit)
    {
      actuelPlusPetit++;
      int found = rechercheDichotomique(actuelPlusPetit);
      if (found == -1)
      {
        idEleve = actuelPlusPetit;
      }
    }
    if (actuelPlusPetit == N + 1)
    {
      actuelPlusPetit = -1;
    }
    cout << actuelPlusPetit << '\n';
  }
  return 0;
}