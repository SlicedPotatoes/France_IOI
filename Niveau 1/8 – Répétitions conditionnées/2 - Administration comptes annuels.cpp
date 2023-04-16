#include <iostream>
using namespace std;
int main()
{
  int sum = 0, n;
  cin >> n;
  while (n != -1)
  {
    sum += n;
    cin >> n;
  }
  cout << sum;
}