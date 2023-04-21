#include <iostream>
using namespace std;

struct product
{
  int quantite, dateP;
};
const int MAX_LENGTH = 1001;
const int DATE_MAX = 99999999;
int length = 0;
product arr[MAX_LENGTH];

void add(product p)
{
  arr[length] = p;
  length++;
}
void get()
{
  arr[length - 1].quantite--;
  if (arr[length - 1].quantite == 0)
  {
    length--;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  int nbOperation;
  cin >> nbOperation;
  for (int i = 0; i < nbOperation; i++)
  {
    product p;
    cin >> p.quantite >> p.dateP;
    if (p.quantite > 0)
    {
      add(p);
    }
    else
    {
      for (int j = 0; j < abs(p.quantite); j++)
      {
        get();
      }
    }
  }
  int min = DATE_MAX;
  for (int i = 0; i < length; i++)
  {
    product p = arr[i];
    // cout << p.quantite << ' ' << p.dateP << '\n';
    if (p.dateP < min)
    {
      min = p.dateP;
    }
  }
  cout << min;
}
