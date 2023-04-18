#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  string line;
  getline(cin, line);
  for (int i = 0; i < (int)line.length(); i++)
  {
    if (islower(line[i]))
    {
      cout << (char)toupper(line[i]);
    }
    else
    {
      cout << line[i];
    }
  }
}
