#include <iostream>
using namespace std;
int main()
{
  int age, poids;
  cin >> age >> poids;
  if (age == 60)
  {
    cout << "0";
  }
  else if (age < 10)
  {
    cout << "5";
  }
  else if (poids >= 20)
  {
    cout << "40";
  }
  else
  {
    cout << "30";
  }
}