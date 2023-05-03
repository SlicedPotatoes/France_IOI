// Ne passe pas tout les tests
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point
{
  int x, y;
};
enum Axe
{
  Horizontal = 0,
  Vertical = 1
};

const int MAX_LENGTH = 40;
char map[MAX_LENGTH][MAX_LENGTH];
int H, W;
vector<point> listBilles;

bool sortBilleH(point &a, point &b)
{
  return a.x > b.x;
}
bool sortBilleV(point &a, point &b)
{
  return a.y > b.y;
}

void simulateMovement(char dir)
{
  vector<point *> elementsADelete;
  int axe = (dir == 'S' || dir == 'N') ? Vertical : Horizontal;
  int indiceIncr = dir == 'S' || dir == 'E' ? 1 : -1;
  if (dir == 'N' || dir == 'S')
  {
    sort(listBilles.begin(), listBilles.end(), sortBilleV);
  }
  else
  {
    sort(listBilles.begin(), listBilles.end(), sortBilleH);
  }
  if (dir == 'N' || dir == 'O')
  {
    reverse(listBilles.begin(), listBilles.end());
  }

  for (point &p : listBilles)
  {
    map[p.y][p.x] = '.';
    char actualCase = map[p.y][p.x];
    while (actualCase == '.' && p.y >= 0 && p.y < H && p.x >= 0 && p.x < W)
    {
      p.y += (axe == Vertical ? indiceIncr : 0);
      p.x += (axe == Horizontal ? indiceIncr : 0);
      actualCase = map[p.y][p.x];
    }
    if (actualCase != 'O')
    {
      p.y -= (axe == Vertical ? indiceIncr : 0);
      p.x -= (axe == Horizontal ? indiceIncr : 0);
      map[p.y][p.x] = 'x';
    }
    else
    {
      elementsADelete.push_back(&p);
    }
  }
  for (point *element : elementsADelete)
  {
    listBilles.erase(listBilles.begin() + (element - &listBilles[0]));
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin >> H >> W;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      char element;
      cin >> element;
      map[i][j] = element;
      if (element == 'x')
      {
        listBilles.push_back({j, i});
      }
    }
  }
  int nbCoup;
  cin >> nbCoup;
  for (int i = 0; i < nbCoup; i++)
  {
    char coup;
    cin >> coup;
    simulateMovement(coup);
  }
  cout << listBilles.size();
}