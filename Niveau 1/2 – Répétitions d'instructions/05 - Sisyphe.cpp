#include "robot.h"
using namespace std;

int main()
{
  for (int i = 0; i < 21; i++)
  {
    haut();
    droite();
  }
  for (int i = 0; i < 21; i++)
  {
    gauche();
    bas();
  }
}