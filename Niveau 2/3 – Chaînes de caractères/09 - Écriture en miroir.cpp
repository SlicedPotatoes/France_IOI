#include <iostream>
#include <string>
using namespace std;
int main()
{
  int nbLignes;
  cin >> nbLignes;
  cin.ignore();
  for (int i = 0; i < nbLignes; i++)
  {
    string line;
    getline(cin, line);
    int longeur = (int)line.length();
    for (int i = longeur - 1; i >= 0; i--)
    {
      cout << line[i];
    }
    cout << endl;
  }
}