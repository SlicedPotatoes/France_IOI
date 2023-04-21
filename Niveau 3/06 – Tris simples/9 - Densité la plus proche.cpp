#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_LENGTH = 20 * 1000;
int arr[MAX_LENGTH];
int nbElements;

int rechercheDichotomique(int value)
{
  int min = 0;
  int max = nbElements;
  while (min != max)
  {
    int mid = (min + max) / 2;
    int arrMid = arr[mid];
    if (arrMid > value)
    {
      max = mid;
    }
    else if (arrMid < value)
    {
      min = mid + 1;
    }
    else
    {
      return value;
    }
  }
  if (min - 1 >= 0 && abs(arr[min] - value) >= abs(arr[min - 1] - value))
  {
    return arr[min - 1];
  }
  return arr[min];
}

int main()
{
  ios::sync_with_stdio(false);
  int nbQuestions;
  cin >> nbElements;
  for (int i = 0; i < nbElements; i++)
  {
    cin >> arr[i];
  }
  cin >> nbQuestions;
  sort(arr, arr + nbElements);
  for (int i = 0; i < nbQuestions; i++)
  {
    int value;
    cin >> value;
    cout << rechercheDichotomique(value) << '\n';
  }
}
