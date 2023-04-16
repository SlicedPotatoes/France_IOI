#include <iostream>
#include <string>
using namespace std;
int main()
{
  for (int i = 0; i < 6; i++)
  {
    string auteur, titre;
    getline(cin, auteur);
    getline(cin, titre);
    cout << titre << endl
         << auteur << endl;
  }
}