#include <iostream>
using namespace std;
int main()
{
  int nbDep;
  cin >> nbDep;
  int dep[nbDep] = {0};
  int depHelper[5] = {2, 1, 3, 5, 4};
  for (int i = 0; i < nbDep; i++)
  {
    int d;
    cin >> d;
    dep[i] = d;
  }
  for (int i = nbDep - 1; i >= 0; i--)
  {
    cout << depHelper[dep[i] - 1] << endl;
  }
}