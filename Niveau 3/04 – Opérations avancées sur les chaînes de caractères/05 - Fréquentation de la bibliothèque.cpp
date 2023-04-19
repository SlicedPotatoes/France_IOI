#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int n = 0;
  int sum = 0;
  cin >> n;
  while (!cin.fail())
  {
    sum += n;
    cin >> n;
  }
  cout << sum;
}
