#include <iostream>
using namespace std;
int main()
{
  int nbPaquet;
  int poidsPaquet;
  cin >> nbPaquet;
  cin >> poidsPaquet;
  if (nbPaquet * poidsPaquet > 105)
  {
    cout << "Surcharge !";
  }
}