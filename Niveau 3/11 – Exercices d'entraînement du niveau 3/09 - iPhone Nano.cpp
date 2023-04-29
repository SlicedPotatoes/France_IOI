#include <iostream>
#include <vector>

using namespace std;

vector<string> motsBonneLongueur(vector<string> mots, int length)
{
  vector<string> newList;
  int l = mots.size();
  for (int i = 0; i < l; i++)
  {
    string m = mots[i];
    if ((int)m.size() == length)
    {
      newList.push_back(m);
    }
  }
  return newList;
}

vector<string> reduceListMot(vector<string> mots, string frappes, int index)
{
  vector<string> newList;
  for (int i = 0; i < (int)mots.size(); i++)
  {
    string mot = mots[i];
    for (int j = 0; j < 4; j++)
    {
      if (mot[index] == frappes[j])
      {
        newList.push_back(mot);
        break;
      }
    }
  }
  return newList;
}

int main()
{
  ios::sync_with_stdio(false);
  int nbMots, nbFrappe;
  cin >> nbMots;
  vector<string> listMots;
  for (int i = 0; i < nbMots; i++)
  {
    string w;
    cin >> w;
    listMots.push_back(w);
  }
  cin >> nbFrappe;
  listMots = motsBonneLongueur(listMots, nbFrappe);
  for (int i = 0; i < nbFrappe; i++)
  {
    string f;
    cin >> f;
    for (int j = 0; j < (int)listMots.size(); j++)
    {
      listMots = reduceListMot(listMots, f, i);
    }
  }
  cout << listMots[0];
}