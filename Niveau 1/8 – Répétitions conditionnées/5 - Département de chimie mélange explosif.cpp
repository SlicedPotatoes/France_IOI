#include <iostream>
using namespace std;
int main()
{
  int nbTotalMesure, tempMin, tempMax;
  cin >> nbTotalMesure >> tempMin >> tempMax;
  for (int i = 0; i < nbTotalMesure; i++)
  {
    int temp;
    cin >> temp;
    if (temp >= tempMin && temp <= tempMax)
    {
      cout << "Rien à signaler" << endl;
    }
    else
    {
      cout << "Alerte !!" << endl;
      break;
    }
  }
}