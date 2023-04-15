#include "robot.h"
using namespace std;

int main()
{
  for (int i = 0; i < 20; i++)
  {
    ramasser();
    for (int j = 0; j < 15; j++)
    {
      droite();
    }
    deposer();
    for (int j = 0; j < 15; j++)
    {
      gauche();
    }
  }
}