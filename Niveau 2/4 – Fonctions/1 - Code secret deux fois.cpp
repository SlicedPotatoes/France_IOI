#include <iostream>
using namespace std;

void mdp()
{
  int password = 0;
  while (password != 4242)
  {
    cout << "Entrez le code :" << endl;
    cin >> password;
  }
}

int main()
{
  mdp();
  cout << "Encore une fois." << endl;
  mdp();
  cout << "Bravo.";
}
