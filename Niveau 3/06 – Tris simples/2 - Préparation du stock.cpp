// Algorithme : "Le tri par insertion"
#include <iostream>
using namespace std;

const int MAX_LENGTH = 6000;
int arr[MAX_LENGTH];
int actualLength;

void showArray()
{
  for (int i = 0; i < actualLength; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}

int find(int element)
{
  for (int i = 0; i < actualLength; i++)
  {
    if (arr[i] >= element)
    {
      return i;
    }
  }
  return actualLength;
}

void insertValue(int value)
{
  int index = find(value);
  cout << index << ' ';
  int temp = arr[index];
  for (int i = index + 1; i <= actualLength; i++)
  {
    int t = arr[i];
    arr[i] = temp;
    temp = t;
  }
  arr[index] = value;
  actualLength++;
}

int main()
{
  ios::sync_with_stdio(false);
  int nbBacToInsert;
  cin >> actualLength >> nbBacToInsert;
  for (int i = 0; i < actualLength; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < nbBacToInsert; i++)
  {
    int valueToInsert;
    cin >> valueToInsert;
    insertValue(valueToInsert);
  }
  cout << '\n';
  showArray();
}
