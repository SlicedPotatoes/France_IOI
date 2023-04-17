#include <iostream>
using namespace std;

const int CHAR_REF = (int)'A';

int main()
{
  string mot;
  cin >> mot;
  int c1 = (int)mot[0] - CHAR_REF, c2 = (int)mot[1] - CHAR_REF;
  int i1 = ((11 * c1) + (3 * c2)) % 26;
  int i2 = ((7 * c1) + (4 * c2)) % 26;
  cout << (char)(i1 + CHAR_REF) << (char)(i2 + CHAR_REF);
}