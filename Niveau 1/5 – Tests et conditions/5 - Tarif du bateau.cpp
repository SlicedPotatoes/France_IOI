#include <iostream>
using namespace std;
int main()
{
  int age;
  cin >> age;
  if (age < 21)
  {
    cout << "Tarif réduit";
  }
  else
  {
    cout << "Tarif plein";
  }
}