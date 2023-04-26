#include <iostream>
#include <set>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int nbPoint;
  cin >> nbPoint;
  set<pair<int, int>> listIndex;
  set<pair<int, int>> listMilieux;

  for (int i = 0; i < nbPoint; i++)
  {
    int x, y;
    cin >> x >> y;
    listIndex.insert({x, y});
  }

  for (auto p1 : listIndex)
  {
    for (auto p2 : listIndex)
    {
      if (p1 < p2)
      {
        int x = p1.first + p2.first;
        int y = p1.second + p2.second;
        if (x % 2 == 0 && y % 2 == 0)
        {
          x = x / 2;
          y = y / 2;
          if (listIndex.find({x, y}) != listIndex.end())
          {
            listMilieux.insert({x, y});
          }
        }
      }
    }
  }
  cout << listMilieux.size();
}