#include <iostream>
#include <string>
using namespace std;
int main()
{
  string line;
  getline(cin, line);
  int longeur = (int)line.length();
  for (int i = 0; i < longeur; i++)
  {
    cout << line[i] << endl;
  }
}