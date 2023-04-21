#include <iostream>
using namespace std;

const int MAX_LENGTH = 5000;

int nbBack;

int getMaxElement(int *arr)
{
  int max = 0;
  int indexMax = -1;
  for (int i = 0; i < nbBack; i++)
  {
    int element = arr[i];
    if (element > max)
    {
      max = element;
      indexMax = i;
    }
  }
  arr[indexMax] = -1;
  return max;
}

int main()
{
  ios::sync_with_stdio(false);
  int arr[MAX_LENGTH];
  int placeCamion;
  cin >> nbBack >> placeCamion;
  for (int i = 0; i < nbBack; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < placeCamion; i++)
  {
    int element = getMaxElement(arr);
    cout << element << ' ';
  }
}
