// La partie du code commenté fais partie de la soumissions juste avant que je lise la correction.
// J'ai amélioré ensuite mon code en utilisant un "Buffer Circulaire" ce qui permet de supprimé la boucle qui repositionné les elements
#include <iostream>
using namespace std;

struct produit
{
  int quantite, dateP;
};

const int MAX_ELEMENT = 1001;
const int DATE_MAX = 99999999;
produit file[MAX_ELEMENT];

int indexGet = 0;
int indexEnd = 0;
/*
int length;
void add(produit p){
  file[length] = p;
  length++;
}
void get(){
  file[0].quantite--;
  if(file[0].quantite == 0){
    for(int i = 1; i < length; i++){
      file[i - 1] = file[i];
    }
    length--;
  }
}
*/

void add(produit p)
{
  file[indexEnd] = p;
  indexEnd++;
  if (indexEnd == MAX_ELEMENT)
  {
    indexEnd = 0;
  }
}

void get()
{
  file[indexGet].quantite--;
  if (file[indexGet].quantite == 0)
  {
    indexGet++;
    if (indexGet == MAX_ELEMENT)
    {
      indexGet = 0;
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  int nbOperations;
  cin >> nbOperations;
  for (int i = 0; i < nbOperations; i++)
  {
    produit p;
    cin >> p.quantite >> p.dateP;
    if (p.quantite > 0)
    {
      add(p);
    }
    else
    {
      for (int i = 0; i < abs(p.quantite); i++)
      {
        get();
      }
    }
  }
  int min = DATE_MAX, iStart, iEnd;
  if (indexGet > indexEnd)
  {
    iStart = indexEnd;
    iEnd = indexGet;
  }
  else
  {
    iStart = indexGet;
    iEnd = indexEnd;
  }
  for (int i = iStart; i < iEnd; i++)
  {
    if (file[i].dateP < min)
    {
      min = file[i].dateP;
    }
  }
  cout << min;
}
