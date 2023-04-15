#include "robot.h"
#include <iostream>
using namespace std;

int main()
{
  gauche();
  gauche();
  cout << "Bonjour, laissez-moi vous aider" << endl;
  ramasser();
  for (int i = 0; i < 32; i++)
  {
    droite();
  }
  deposer();
}