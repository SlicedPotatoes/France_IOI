#include <iostream>
#include <string>
using namespace std;

void printReverse(string s, int index)
{
  if (index == -1)
  {
    return;
  }
  cout << s[index];
  printReverse(s, index - 1);
}

int main()
{
  ios::sync_with_stdio(false);
  string s;
  getline(cin, s);
  printReverse(s, (int)s.length() - 1);
}