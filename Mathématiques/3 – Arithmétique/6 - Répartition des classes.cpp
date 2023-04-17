#include <iostream>
using namespace std;
int main()
{
  int eleves, nbSalles;
  cin >> eleves >> nbSalles;
  int mod = eleves % nbSalles;
  int div = eleves / nbSalles;
  for (int i = 0; i < mod; i++)
  {
    cout << div + 1 << endl;
  }
  for (int i = 0; i < nbSalles - mod; i++)
  {
    cout << div << endl;
  }
}