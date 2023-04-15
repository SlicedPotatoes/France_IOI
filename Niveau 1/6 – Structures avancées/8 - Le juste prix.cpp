#include <iostream>
using namespace std;
int main()
{
  int nbMarchands, min = 1000000, index = 0;
  cin >> nbMarchands;
  for (int i = 1; i <= nbMarchands; i++)
  {
    int prix;
    cin >> prix;
    if (prix <= min)
    {
      min = prix;
      index = i;
    }
  }
  cout << index;
}