#include <iostream>
#include <string>

static const int CHAR_REF = 'a';

using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  string key, text, decrypted = "";
  cin >> key;
  cin.ignore();
  getline(cin, text);
  for (int i = 0; i < (int)text.length(); i++)
  {
    char c = text[i];
    if (isalpha(c))
    {
      char decodedChar = key[tolower(c) - CHAR_REF];
      if (isupper(c))
      {
        decrypted += toupper(decodedChar);
      }
      else
      {
        decrypted += decodedChar;
      }
    }
    else
    {
      decrypted += c;
    }
  }
  cout << decrypted;
}
