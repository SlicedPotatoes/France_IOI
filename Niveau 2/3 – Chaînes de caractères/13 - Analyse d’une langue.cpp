#include <iostream>
#include <string>
using namespace std;
int main()
{
  char c;
  int nbLines, count = 0;
  cin >> c >> nbLines;
  cin.ignore();
  for (int i = 0; i < nbLines; i++)
  {
    string line;
    getline(cin, line);
    int length = (int)line.length();
    for (int j = 0; j < length; j++)
    {
      if (line[j] == c)
      {
        count++;
      }
    }
  }
  cout << count;
}