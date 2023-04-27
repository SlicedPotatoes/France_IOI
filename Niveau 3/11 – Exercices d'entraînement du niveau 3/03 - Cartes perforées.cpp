#include <iostream>
#include <vector>
using namespace std;

void findAndWrite(string line, char c)
{
  int length = line.length();
  for (int i = 0; i < length; i++)
  {
    if (line[i] == c)
    {
      cout << char(i + 'A');
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  int nbLine;
  cin >> nbLine;
  for (int i = 0; i < nbLine; i++)
  {
    string oneLine;
    cin >> oneLine;
    findAndWrite(oneLine, 'O');
  }
}