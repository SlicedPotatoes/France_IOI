#include <iostream>
#include <algorithm>
using namespace std;

struct Bac
{
  int id, nivPollution;
};
bool sortBac(Bac a, Bac b)
{
  if (a.nivPollution == b.nivPollution)
  {
    return a.id < b.id;
  }
  return a.nivPollution < b.nivPollution;
}

const int MAX_LENGTH = 20 * 1000;

int main()
{
  ios::sync_with_stdio(false);
  int nbBacs;
  Bac bacs[MAX_LENGTH];
  cin >> nbBacs;
  for (int i = 0; i < nbBacs; i++)
  {
    Bac b;
    cin >> b.id;
    cin >> b.nivPollution;
    bacs[i] = b;
  }
  sort(bacs, bacs + nbBacs, sortBac);
  for (int i = 0; i < nbBacs; i++)
  {
    Bac b = bacs[i];
    cout << b.id << ' ' << b.nivPollution << '\n';
  }
}
