#include <iostream>
#include <string>
using namespace std;
int main()
{
  string line;
  getline(cin, line);
  int length = (int)line.length();
  for (int i = 0; i < length; i++)
  {
    if (line[i] == ' ')
    {
      line[i] = '_';
    }
  }
  cout << line;
}