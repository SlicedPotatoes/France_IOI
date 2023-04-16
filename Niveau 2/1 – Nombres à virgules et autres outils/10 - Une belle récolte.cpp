#include <iostream>
using namespace std;
int main()
{
  int nbPersonnes, nbFruits;
  cin >> nbPersonnes >> nbFruits;
  if (nbFruits % nbPersonnes == 0)
  {
    cout << "oui";
  }
  else
  {
    cout << "non";
  }
}