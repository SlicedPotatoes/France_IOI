#include <iostream>
using namespace std;
int main()
{
  int nbPersonne;
  int nombre = 66;
  cin >> nbPersonne;
  for (int i = 1; i <= nbPersonne; i++)
  {
    cout << (nombre) << endl;
    nombre *= 1 + i;
  }
}