#include <iostream>
using namespace std;
int main()
{
  int borne1, borne2;
  cin >> borne1 >> borne2;
  if (borne1 > borne2)
  {
    cout << borne1 - borne2;
  }
  else
  {
    cout << borne2 - borne1;
  }
}