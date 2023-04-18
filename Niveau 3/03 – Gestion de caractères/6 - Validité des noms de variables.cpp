#include <iostream>
#include <cctype>
using namespace std;

bool isValidVariableName(string s)
{
  if (!isalpha(s[0]) && s[0] != '_')
  {
    return false;
  }
  for (int i = 1; i < (int)s.length(); i++)
  {
    if (!isalpha(s[i]) && s[i] != '_' && !isdigit(s[i]))
    {
      return false;
    }
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string nom;
    cin >> nom;
    if (isValidVariableName(nom))
    {
      cout << "YES"
           << "\n";
    }
    else
    {
      cout << "NO"
           << "\n";
    }
  }
}
