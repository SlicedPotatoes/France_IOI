#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  for (char c = 'a'; c <= 'z'; c++)
  {
    if (c != 'a' and c != 'e' and c != 'i' and c != 'o' and c != 'u' and c != 'y')
    {
      cout << c << ' ';
    }
  }
}
