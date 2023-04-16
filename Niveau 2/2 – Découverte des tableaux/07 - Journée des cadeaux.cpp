#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
  int nbHabitants;
  cin >> nbHabitants;
  int fortunes[nbHabitants] = {0};
  for (int i = 0; i < nbHabitants; i++)
  {
    int f;
    cin >> f;
    fortunes[i] = f;
  }
  sort(&fortunes[0], &fortunes[nbHabitants]);
  if (nbHabitants % 2 == 0)
  {
    double a = (double)fortunes[nbHabitants / 2];
    double b = (double)fortunes[(nbHabitants / 2) - 1];
    cout << ((a + b) / 2);
  }
  else
  {
    cout << fortunes[(nbHabitants / 2)];
  }
}