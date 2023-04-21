#include <iostream>
using namespace std;

const int MAX_ELEMENTS = 100 * 1000;

int main()
{
  ios::sync_with_stdio(false);
  int length, i = 0;
  cin >> length;
  char expression[MAX_ELEMENTS];
  char c;
  cin >> c;
  while (!cin.fail())
  {
    expression[i] = c;
    i++;
    cin >> c;
  }
  int countOpen = 0;
  for (int a = 0; a < i; a++)
  {
    char element = expression[a];
    if (element == '(')
    {
      countOpen++;
    }
    else
    {
      if (countOpen < 1)
      {
        cout << 0;
        return 0;
      }
      countOpen--;
    }
  }
  if (countOpen != 0)
  {
    cout << 0;
    return 0;
  }
  cout << 1;
}
