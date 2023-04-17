#include <iostream>
using namespace std;

const int REF_CHAR = 'a';

void printLine(int length, int index)
{
  int _length = length * 2 - 1;
  string s = "";
  for (int i = 0; i < _length; i++)
  {
    if (_length - i - 1 < index)
    {
      if ((int)s.length() < length)
      {
        s += s[(int)s.length() - 1];
      }
      else
      {
        s += s[_length - 1 - (int)s.length()];
      }
    }
    else if (index < i)
    {
      s += REF_CHAR + index;
    }
    else
    {
      s += REF_CHAR + i;
    }
  }
  cout << s << endl;
}

int main()
{
  int length;
  cin >> length;
  for (int i = 0; i < length * 2 - 1; i++)
  {
    printLine(length, i);
  }
}
