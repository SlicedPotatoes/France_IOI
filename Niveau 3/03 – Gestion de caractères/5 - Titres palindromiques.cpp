#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
  int indexD = 0, indexF = (int)s.length() - 1;
  for (int i = 0; i < (int)s.length() / 2; i++)
  {
    if (s[indexD] == ' ')
    {
      indexD++;
    }
    if (s[indexF] == ' ')
    {
      indexF--;
    }
    if (tolower(s[indexD]) != tolower(s[indexF]))
    {
      return false;
    }
    indexD++;
    indexF--;
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    string title;
    getline(cin, title);
    if (isPalindrome(title))
    {
      cout << title << "\n";
    }
  }
}
