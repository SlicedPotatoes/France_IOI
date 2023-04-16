#include <iostream>
using namespace std;
int main()
{
  int p, tList;
  cin >> p >> tList;
  bool estSortie = false;
  for (int i = 0; i < tList; i++)
  {
    int pers;
    cin >> pers;
    if (pers == p)
    {
      estSortie = true;
      break;
    }
  }
  if (estSortie)
  {
    cout << "Sorti de la ville";
  }
  else
  {
    cout << "Encore dans la ville";
  }
}