#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_LENGTH = 20 * 1000;
int arr[MAX_LENGTH];
int length;

bool dichotomique(int element)
{
  int start = 0;
  int end = length - 1;
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
  cin >> length;
  for (int i = 0; i < length; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + length);
  int count = 0;
  for (int i = 0; i < length; i++)
  {
    int element = arr[i];
    if (element >= 0)
    {
      cout << count;
      return 0;
    }
    if ((i == 0 || element != arr[i - 1]) && dichotomique(abs(element)))
    {
      count++;
    }
  }
}