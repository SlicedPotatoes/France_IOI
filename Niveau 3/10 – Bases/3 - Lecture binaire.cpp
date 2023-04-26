#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  int length = s.length();
  int sum = 0, p2 = 1;
  for (int i = length - 1; i > -1; i--)
  {
    if (s[i] == '1')
    {
      sum += p2;
    }
    p2 *= 2;
  }
  cout << sum;
}