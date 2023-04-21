// Algorithme : "Le tri par sélection"
#include <iostream>
using namespace std;

const int MAX_ELEMENT = 1000;
int arr[MAX_ELEMENT];
int nbElement;

void showArray()
{
  for (int i = 0; i < nbElement; i++)
  {
    cout << arr[i] << ' ';
  }
}

void triParSelection()
{
  for (int nbIteration = 0; nbIteration < nbElement; nbIteration++)
  {
    int max = -1;
    int maxIndex = -1;
    for (int i = 0; i < nbElement - nbIteration; i++)
    {
      int element = arr[i];
      if (element > max)
      {
        max = element;
        maxIndex = i;
      }
    }
    arr[maxIndex] = arr[nbElement - 1 - nbIteration];
    arr[nbElement - 1 - nbIteration] = max;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin >> nbElement;
  for (int i = 0; i < nbElement; i++)
  {
    cin >> arr[i];
  }
  triParSelection();
  showArray();
}
