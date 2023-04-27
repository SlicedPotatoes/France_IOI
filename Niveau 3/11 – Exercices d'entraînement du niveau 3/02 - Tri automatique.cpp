#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_ELEMENTS = 50 * 1000;
int objectsPetits[MAX_ELEMENTS];
int objectsSouples[MAX_ELEMENTS];

int nbPetits;
int nbSouples;

bool rechercheDichotomique(int element)
{
  int *arr = objectsPetits;
  int start = 0;
  int end = nbPetits - 1;
  if (nbPetits > nbSouples)
  {
    arr = objectsSouples;
    end = nbSouples - 1;
  }
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] > element)
    {
      end = mid - 1;
    }
    else if (arr[mid] < element)
    {
      start = mid + 1;
    }
    else
    {
      return true;
    }
  }
  return false;
}

int main()
{
  ios::sync_with_stdio(false);
  cin >> nbPetits;
  for (int i = 0; i < nbPetits; i++)
  {
    cin >> objectsPetits[i];
  }
  cin >> nbSouples;
  for (int i = 0; i < nbSouples; i++)
  {
    cin >> objectsSouples[i];
  }
  // Sort le tableau contenent le moins d'element et mettre le pointeur du tableau le plus grand dans arr
  int *arr = objectsPetits;
  int *length = &nbPetits;
  if (nbPetits > nbSouples)
  {
    sort(objectsSouples, objectsSouples + nbSouples);
  }
  else
  {
    sort(objectsPetits, objectsPetits + nbPetits);
    arr = objectsSouples;
    length = &nbSouples;
  }
  int count = 0;
  for (int i = 0; i < *length; i++)
  {
    if (rechercheDichotomique(arr[i]))
    {
      count++;
    }
  }
  cout << count;
}