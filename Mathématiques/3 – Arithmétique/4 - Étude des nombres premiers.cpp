#include <iostream>
using namespace std;

int generatePrimeNumber(int n)
{
  int length = 1;
  int primeNumber[n] = {2};
  int number = 2;
  while (number <= n)
  {
    bool isPrime = true;
    for (int i = 0; i < length; i++)
    {
      if (number % primeNumber[i] == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      primeNumber[length] = number;
      length++;
    }
    number++;
  }
  return primeNumber[length - 1];
}

int main()
{
  int n;
  cin >> n;
  if (n == generatePrimeNumber(n))
  {
    cout << "Premier";
  }
  else
  {
    cout << "Composé";
  }
}