#include <iostream>
using namespace std;

void mdp(int m)
{
  int password = 0;
  while (password != m)
  {
    cout << "Entrez le code :" << endl;
    cin >> password;
  }
}

int main()
{
  mdp(4242);
  cout << "Premier code bon." << endl;
  mdp(2121);
  cout << "Bravo.";
}
