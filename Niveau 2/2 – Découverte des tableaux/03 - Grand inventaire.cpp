#include <iostream>
using namespace std;
int main()
{
  int stock[10] = {0};
  int nbOperation;
  cin >> nbOperation;
  for (int i = 0; i < nbOperation; i++)
  {
    int id, operation;
    cin >> id >> operation;
    stock[id - 1] += operation;
  }
  for (int i = 0; i < 10; i++)
  {
    cout << stock[i] << endl;
  }
}