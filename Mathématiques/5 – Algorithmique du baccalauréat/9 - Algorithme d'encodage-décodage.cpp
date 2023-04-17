#include <iostream>
using namespace std;

#define ENCODE_Y1 (char)((((a * c1) + (b * c2)) % 26) + REF_CHAR)
#define ENCODE_Y2 (char)((((c * c1) + (d * c2)) % 26) + REF_CHAR)

const int REF_CHAR = 'A';

int main()
{
  string word;
  int a, b, c, d;
  cin >> word >> a >> b >> c >> d;
  int length = (int)word.length();
  for (int i = 0; i < length; i += 2)
  {
    int c1 = word[i] - REF_CHAR, c2 = word[i + 1] - REF_CHAR;
    cout << ENCODE_Y1 << ENCODE_Y2;
  }
}