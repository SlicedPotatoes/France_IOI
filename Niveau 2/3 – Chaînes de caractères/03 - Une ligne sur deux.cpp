#include <iostream>
#include <string>
using namespace std;
int main()
{
  int nbLigne;
  cin >> nbLigne;
  cin.ignore();
  for (int i = 0; i < nbLigne; i++)
  {
    string s;
    getline(cin, s);
    if (i % 2 == 0)
    {
      cout << s << endl;
    }
  }
}