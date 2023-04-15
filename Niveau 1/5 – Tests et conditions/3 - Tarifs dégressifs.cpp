#include <iostream>
using namespace std;
int main()
{
  int heure;
  int prix = 10;
  cin >> heure;
  prix += heure * 5;
  if (prix > 53)
  {
    cout << 53;
  }
  else
  {
    cout << prix;
  }
}