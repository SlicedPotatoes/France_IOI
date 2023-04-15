#include "robot.h"
using namespace std;

int main()
{
  for (int i = 0; i < 108; i++)
  {
    for (int j = 0; j < 13; j++)
    {
      haut();
    }
    for (int j = 0; j < 13; j++)
    {
      droite();
    }
    for (int j = 0; j < 13; j++)
    {
      bas();
    }
    for (int j = 0; j < 13; j++)
    {
      gauche();
    }
  }
}