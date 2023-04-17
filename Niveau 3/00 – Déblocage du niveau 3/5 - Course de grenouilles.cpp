#include <iostream>
using namespace std;

static const int MAX_GRENOUILLES = 101;

static int nbGrenouilles;
static int grenouillesEnTete[MAX_GRENOUILLES] = {0};
static int state[MAX_GRENOUILLES] = {0};
static int posFirstGrenouille = 0;
static int idFirstGrenouille = 0;

int main()
{
  int nbTours;
  cin >> nbGrenouilles >> nbTours;

  for (int i = 1; i < nbTours; i++)
  {
    int idGrenouille, distanceSaut;
    cin >> idGrenouille >> distanceSaut;

    state[idGrenouille] += distanceSaut;
    int actuelPos = state[idGrenouille];
    if (actuelPos > posFirstGrenouille)
    {
      posFirstGrenouille = actuelPos;
      idFirstGrenouille = idGrenouille;
    }
    else if (actuelPos == posFirstGrenouille)
    {
      idFirstGrenouille = 0;
    }
    if (idFirstGrenouille != 0)
    {
      grenouillesEnTete[idFirstGrenouille]++;
    }
  }
  int max = 0;
  int idMax = 1;
  for (int i = 1; i <= nbGrenouilles; i++)
  {
    int element = grenouillesEnTete[i];
    if (element > max)
    {
      max = element;
      idMax = i;
    }
  }
  cout << idMax;
}
