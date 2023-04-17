#include <iostream>
using namespace std;
int main()
{
  int nbEleves, lastEleve1 = 1, lastEleve2 = 1;
  cin >> nbEleves;
  for (int i = 0; i < nbEleves; i++)
  {
    cout << lastEleve1 << endl;
    int temp = lastEleve1;
    lastEleve1 = lastEleve2;
    lastEleve2 += temp;
  }
}