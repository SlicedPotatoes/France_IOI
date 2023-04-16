#include <iostream>
#include <string>
using namespace std;
int main()
{
  int nb;
  cin >> nb;
  for (int i = 0; i < nb; i++)
  {
    string prenom, nom;
    cin >> prenom >> nom;
    cout << nom << " " << prenom << endl;
  }
}