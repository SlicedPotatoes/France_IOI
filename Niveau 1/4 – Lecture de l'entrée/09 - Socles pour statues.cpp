#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  int max;
  int min;
  cin >> max;
  cin >> min;
  for (int i = min; i <= max; i++)
  {
    sum += i * i;
  }
  cout << sum;
}