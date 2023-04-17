#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double argent, prix;
  cin >> argent >> prix;
  cout << ((argent - fmod(argent, prix)) / prix);
}