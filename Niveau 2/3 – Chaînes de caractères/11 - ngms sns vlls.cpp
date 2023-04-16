#include <iostream>
#include <string>
using namespace std;
int main()
{
  char c[7] = {'A', 'E', 'I', 'O', 'U', 'Y', ' '};
  string lines[2] = {"", ""};
  getline(cin, lines[0]);
  getline(cin, lines[1]);
  for (int i = 0; i < 2; i++)
  {
    string line = lines[i];
    int length = (int)line.length();
    for (int j = 0; j < length; j++)
    {
      char _c = line[j];
      bool printChar = true;
      for (int k = 0; k < 7; k++)
      {
        if (_c == c[k])
        {
          printChar = false;
          break;
        }
      }
      if (printChar)
      {
        cout << _c;
      }
    }
    cout << endl;
  }
}