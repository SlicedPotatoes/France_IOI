#include <iostream>
using namespace std;

string recur(int n, string s)
{
  if (n == 0)
  {
    return s;
  }
  string _s = "";
  int strLength = s.length();
  for (int i = 0; i < strLength; i++)
  {
    if (s[i] == '0')
    {
      _s += "(0 + 0)";
      continue;
    }
    _s += s[i];
  }
  return recur(n - 1, _s);
}

int main()
{
  ios::sync_with_stdio(false);
  int nb;
  cin >> nb;
  cout << "0 = " << recur(nb, "0");
}