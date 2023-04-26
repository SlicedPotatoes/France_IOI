#include <iostream>
#include <string>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  string s;
  getline(cin, s);
  int length = s.length();
  int actualMaxLength = 1;
  for (int pivot = 0; pivot < length; pivot++)
  {
    for (int i = 0; i < 2; i++)
    {
      int _length = 1;
      bool end = false;
      while (!end)
      {
        end = true;
        int indiceA = pivot - _length;
        int indiceB = pivot + _length - i;
        if ((indiceA >= 0) && (indiceB < length) && s[indiceA] == s[indiceB])
        {
          _length += 1;
          end = false;
        }
        else if (_length > 1)
        {
          int l = indiceB - indiceA - 1;
          if (l > actualMaxLength)
          {
            actualMaxLength = l;
          }
        }
      }
    }
  }
  cout << actualMaxLength;
}