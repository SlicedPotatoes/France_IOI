#include <iostream>
#include <string>
using namespace std;
int main()
{
  string nom1, nom2;
  getline(cin, nom1);
  getline(cin, nom2);
  if (nom1 > nom2)
  {
    cout << nom2;
  }
  else if (nom2 > nom1)
  {
    cout << nom1;
  }
}