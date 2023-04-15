#include "robot.h"
using namespace std;
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    for (int _ = 0; _ < i; _++)
    {
      droite();
    }
    ramasser();
    for (int _ = 0; _ < i; _++)
    {
      gauche();
    }
    deposer();
  }
}