#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_LENGTH = 10 * 1000;

int main()
{
  ios::sync_with_stdio(false);
  int nbElements;
  string arr[MAX_LENGTH];
  cin >> nbElements;
  for (int i = 0; i < nbElements; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + nbElements);
  for (int i = 0; i < nbElements; i++)
  {
    cout << arr[i] << '\n';
  }
}
