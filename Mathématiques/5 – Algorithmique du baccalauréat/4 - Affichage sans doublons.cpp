#include <iostream>
#include <cmath>
using namespace std;

bool elementInArray(int *arr, int el, int length)
{
  for (int i = 0; i < length; i++)
  {
    if (arr[i] == el)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int A, N = 1, length = 0;
  cin >> A;
  int array[A] = {0};
  while (N <= sqrt(A))
  {
    if (A % N == 0)
    {
      if (!elementInArray(array, N, length))
      {
        array[length] = N;
        length++;
        cout << N << endl;
      }
      int div = A / N;
      if (!elementInArray(array, div, length))
      {
        array[length] = div;
        length++;
        cout << A / N << endl;
      }
    }
    N++;
  }
}