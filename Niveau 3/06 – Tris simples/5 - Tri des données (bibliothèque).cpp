#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_LENGTH = 50 * 1000;

int main()
{
  ios::sync_with_stdio(false);
  int length, arr[MAX_LENGTH];
  cin >> length;
  for (int i = 0; i < length; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + length);
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << ' ';
  }
}
