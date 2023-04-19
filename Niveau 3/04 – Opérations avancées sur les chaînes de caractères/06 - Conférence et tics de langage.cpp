#include <iostream>
#include <cctype>
using namespace std;

string lower(string s)
{
  string _s = "";
  for (int i = 0; i < (int)s.length(); i++)
  {
    _s += tolower(s[i]);
  }
  return _s;
}

int main()
{
  ios::sync_with_stdio(false);
  int compteur = 0;
  string mot, _mot;
  cin >> mot >> _mot;
  mot = lower(mot);
  while (!cin.fail())
  {
    if (mot == lower(_mot))
    {
      compteur++;
    }
    cin >> _mot;
  }
  cout << compteur;
}
