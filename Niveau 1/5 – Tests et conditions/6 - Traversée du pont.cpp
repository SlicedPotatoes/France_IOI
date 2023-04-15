#include <iostream>
using namespace std;
int main()
{
  int de1, de2, sum;
  cin >> de1 >> de2;
  sum = de1 + de2;
  if (sum >= 10)
  {
    cout << "Taxe spéciale !" << endl
         << "36";
  }
  else
  {
    cout << "Taxe régulière" << endl
         << (sum * 2);
  }
}