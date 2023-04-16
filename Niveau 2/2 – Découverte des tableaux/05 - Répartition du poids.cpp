#include <iostream>
using namespace std;
int main()
{
  int nbCharrettes;
  double sum = 0.0;
  cin >> nbCharrettes;
  double charrettes[nbCharrettes] = {0.0};
  for (int i = 0; i < nbCharrettes; i++)
  {
    double poids;
    cin >> poids;
    charrettes[i] = poids;
    sum += poids;
  }
  double moy = sum / nbCharrettes;
  for (int i = 0; i < nbCharrettes; i++)
  {
    cout << (moy - charrettes[i]) << endl;
  }
}