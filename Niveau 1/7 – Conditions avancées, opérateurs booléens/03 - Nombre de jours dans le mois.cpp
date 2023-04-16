#include <iostream>
using namespace std;
int main()
{
  int m;
  cin >> m;
  if ((m >= 1 && m <= 3) || (m >= 7 && m <= 9))
  {
    cout << 30;
  }
  else if ((m >= 4 && m <= 6) || m == 10)
  {
    cout << 31;
  }
  else
  {
    cout << 29;
  }
}