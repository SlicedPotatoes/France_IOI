#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  string arr[n];
  for (int i = 0; i < n; i++)
  {
    string mot1, mot2;
    cin >> mot1 >> mot2;
    arr[i] = mot2 + " " + mot1;
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "\n";
  }
}
