#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  for (int i = 0; i < 20; i++)
  {
    int nb;
    cin >> nb;
    sum += nb;
  }
  cout << sum;
}