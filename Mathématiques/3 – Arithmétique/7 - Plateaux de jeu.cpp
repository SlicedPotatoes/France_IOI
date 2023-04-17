#include <iostream>
using namespace std;
int main()
{
  int nbLignes, nbCols;
  cin >> nbLignes >> nbCols;
  for (int i = 0; i < nbLignes; i++)
  {
    for (int j = 0; j < nbCols; j++)
    {
      if ((i + j) % 2 == 0)
      {
        cout << "O";
      }
      else
      {
        cout << "X";
      }
    }
    cout << endl;
  }
}