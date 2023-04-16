#include <iostream>
using namespace std;
int main()
{
  int pTotal, max = 0, actuel = 0;
  cin >> pTotal;
  for (int i = 0; i < pTotal * 2; i++)
  {
    int p;
    cin >> p;
    if (p > 0)
    {
      actuel++;
    }
    else
    {
      actuel--;
    }
    if (actuel > max)
    {
      max = actuel;
    }
  }
  cout << max;
}