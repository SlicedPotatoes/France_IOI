#include <iostream>
using namespace std;
int main()
{
  int pop;
  double croissance;
  cin >> pop >> croissance;
  cout << (int)(pop + (pop * croissance / 100));
}