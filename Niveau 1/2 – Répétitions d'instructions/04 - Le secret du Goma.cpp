#include "robot.h"
using namespace std;

int main()
{
  for (int i = 0; i < 15; i++)
  {
    droite();
    ramasser();
  }
  droite();
  deposer();
}