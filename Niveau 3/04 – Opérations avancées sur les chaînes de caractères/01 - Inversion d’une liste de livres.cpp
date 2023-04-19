#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int nb;
  cin >> nb;
  cin.ignore();
  string array[nb] = {""};
  for (int i = 0; i < nb; i++)
  {
    getline(cin, array[i]);
  }
  for (int i = nb - 1; i >= 0; i--)
  {
    cout << array[i] << "\n";
  }
}
