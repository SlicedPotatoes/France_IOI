#include "robot.h"
using namespace std;

int main()
{
  droite();
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      droite();
    }
    haut();
    for (int j = 0; j < 8; j++)
    {
      gauche();
    }
    if (i < 4)
    {
      haut();
    }
    else
    {
      gauche();
    }
  }
  for (int i = 0; i < 9; i++)
  {
    bas();
  }
}