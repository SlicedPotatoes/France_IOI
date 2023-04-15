#include <iostream>
using namespace std;
int main()
{
  int nb;
  cin >> nb;
  for (int i = 0; i < nb; i++)
  {
    int poids, age, cornes, garrot;
    cin >> poids >> age >> cornes >> garrot;
    cout << (cornes * garrot + poids) << endl;
  }
}