#include <iostream>
#include <string>
using namespace std;

static const int CHAR_REF = 'A';

int main()
{
  ios::sync_with_stdio(false);
  string line;
  int freq[26] = {0};
  getline(cin, line);
  for (int i = 0; i < (int)line.length(); i++)
  {
    if (line[i] != ' ')
    {
      int index = toupper(line[i]) - CHAR_REF;
      freq[index]++;
    }
  }
  int max = -1;
  int indexMax = -1;
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] > max)
    {
      max = freq[i];
      indexMax = i;
    }
  }
  cout << (char)(indexMax + CHAR_REF);
}
