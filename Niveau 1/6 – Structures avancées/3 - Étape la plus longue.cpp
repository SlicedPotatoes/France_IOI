#include <iostream>
using namespace std;
int main()
{
  int nbJour, max = 0;
  cin >> nbJour;
  for (int i = 0; i < nbJour; i++)
  {
    int d;
    cin >> d;
    if (d > max)
    {
      max = d;
    }
  }
  cout << max;
}