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
  while (min <= max)
  {
    int mid = (min + max) / 2;
    if (arr[mid] > value)
    {
      max = mid - 1;
    }
    else if (arr[mid] < value)
    {
      min = mid + 1;
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
    if (rechercheDichotomique(value))
    {
      cout << 1 << '\n';
    }
    else
    {
      cout << 0 << '\n';
    }
  }
}
