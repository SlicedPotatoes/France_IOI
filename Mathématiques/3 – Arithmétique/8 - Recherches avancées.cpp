#include <iostream>
using namespace std;
int main()
{
  int length = 0;
  int primeNumbers[1000] = {0};
  for (int i = 2; i <= 1000; i++)
  {
    bool isPrime = true;
    for (int j = 0; j < length; j++)
    {
      if (i % primeNumbers[j] == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      cout << i << endl;
      primeNumbers[length] = i;
      length++;
    }
  }
}