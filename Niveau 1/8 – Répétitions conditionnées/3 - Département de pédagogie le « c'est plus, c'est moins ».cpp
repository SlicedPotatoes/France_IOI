#include <iostream>
using namespace std;
int main()
{
  int nb, prop, n = 1;
  cin >> nb >> prop;
  while (nb != prop)
  {
    if (nb > prop)
    {
      cout << "c'est plus" << endl;
    }
    else
    {
      cout << "c'est moins" << endl;
    }
    cin >> prop;
    n++;
  }
  cout << "Nombre d'essais nécessaires :" << endl
       << n;
}