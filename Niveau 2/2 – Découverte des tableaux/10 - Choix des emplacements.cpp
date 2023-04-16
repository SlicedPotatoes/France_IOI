#include <iostream>
using namespace std;
int main()
{
  int nbEmplacements;
  cin >> nbEmplacements;
  int marchants[nbEmplacements];
  for (int i = 0; i < nbEmplacements; i++)
  {
    int m;
    cin >> m;
    marchants[m] = i;
  }
  for (int i = 0; i < nbEmplacements; i++)
  {
    cout << marchants[i] << endl;
  }
}