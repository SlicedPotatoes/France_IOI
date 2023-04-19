#include <iostream>
#include <cctype>
#include <string>
using namespace std;

static string acronyms;

bool acronymsIsForThisTitle(string title)
{
  int index = 0;
  for (int i = 0; i < (int)title.length(); i++)
  {
    if (i == 0 || title[i - 1] == ' ')
    {
      if (toupper(acronyms[index]) != toupper(title[i]))
      {
        return false;
      }
      index++;
    }
  }
  if (index != (int)acronyms.length())
  {
    return false;
  }
  return true;
}

string capitaliser(string s)
{
  string _s = "";
  for (int i = 0; i < (int)s.length(); i++)
  {
    if (i == 0 || _s[i - 1] == ' ')
    {
      _s += toupper(s[i]);
    }
    else
    {
      _s += tolower(s[i]);
    }
  }
  return _s;
}

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> acronyms >> n;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    string title;
    getline(cin, title);
    if (acronymsIsForThisTitle(title))
    {
      cout << capitaliser(title) << "\n";
    }
  }
}