#include <iostream>
#include <string>
#include <cctype>
using namespace std;

static const int CHAR_REF = 'A';

int main()
{
  ios::sync_with_stdio(false);
  string line;
  getline(cin, line);
  int freq[26] = {0};
  int nbLettres = 0;
  for (int i = 0; i < (int)line.length(); i++)
  {
    if (isalpha(line[i]))
    {
      int index = toupper(line[i]) - CHAR_REF;
      freq[index]++;
      nbLettres++;
    }
  }
  for (int i = 0; i < 26; i++)
  {
    cout << (double)freq[i] / nbLettres << "\n";
  }
}
