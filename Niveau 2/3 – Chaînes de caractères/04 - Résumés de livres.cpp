#include <iostream>
#include <string>
using namespace std;
int main()
{
  int nbLivres, longeurMinimale;
  cin >> nbLivres >> longeurMinimale;
  cin.ignore();
  for (int i = 0; i < nbLivres; i++)
  {
    string titre, resume;
    getline(cin, titre);
    getline(cin, resume);
    if (((int)resume.length()) < longeurMinimale)
    {
      cout << titre << endl;
    }
  }
}