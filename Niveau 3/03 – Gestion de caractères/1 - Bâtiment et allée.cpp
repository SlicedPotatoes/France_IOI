#include <iostream>
using namespace std;

static const int CHAR_REF = 'A';

int main()
{
  ios::sync_with_stdio(false);
  string nom;
  int nb;
  cin >> nom >> nb;
  cout << ((int)nom[0] - CHAR_REF + 1) << (char)(nb + CHAR_REF - 1);
}
