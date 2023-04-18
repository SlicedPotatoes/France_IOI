#include <iostream>
using namespace std;

static const int CHAR_REF = 'A';

int getSumLetter(string s)
{
  int sum = 0;
  for (int i = 0; i < (int)s.length(); i++)
  {
    sum += s[i] - CHAR_REF;
  }
  return sum;
}

int getNbAmour(string s)
{
  int n = getSumLetter(s);
  while (n >= 10)
  {
    string s = to_string(n);
    int _n = 0;
    for (int i = 0; i < (int)s.length(); i++)
    {
      _n += stoi(string(1, s[i]));
    }
    n = _n;
  }
  return n;
}

int main()
{
  ios::sync_with_stdio(false);
  string nom1, nom2;
  cin >> nom1 >> nom2;
  cout << getNbAmour(nom1) << " " << getNbAmour(nom2);
}
