#include <iostream>
#include <string>
using namespace std;

string recur(string s, int n)
{
  if (n == 0)
  {
    return s;
  }
  int strLength = s.length();
  string _s = "[";
  for (int i = 0; i < strLength; i++)
  {
    _s += s[i];
  }
  _s += "]";
  return recur(_s, n - 1);
}

int main()
{
  ios::sync_with_stdio(false);
  int nombre, nbPaires;
  cin >> nombre >> nbPaires;
  cout << recur(to_string(nombre), nbPaires);
}