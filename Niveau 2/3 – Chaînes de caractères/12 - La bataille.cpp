#include <iostream>
#include <string>
using namespace std;
int main()
{
  string joueur1, joueur2;
  cin >> joueur1 >> joueur2;
  int lengthj1 = (int)joueur1.length();
  int lengthj2 = (int)joueur2.length();
  int length = lengthj1;
  if (lengthj2 < length)
  {
    length = lengthj2;
  }
  bool end = false;
  for (int i = 0; i < length; i++)
  {
    char j1 = joueur1[i];
    char j2 = joueur2[i];
    if (j1 > j2)
    {
      cout << 2 << endl
           << i;
      end = true;
      break;
    }
    else if (j2 > j1)
    {
      cout << 1 << endl
           << i;
      end = true;
      break;
    }
  }
  if (!end)
  {
    if (lengthj1 > lengthj2)
    {
      cout << 1 << endl;
    }
    else if (lengthj1 < lengthj2)
    {
      cout << 2 << endl;
    }
    else
    {
      cout << "=" << endl;
    }
    cout << length;
  }
}