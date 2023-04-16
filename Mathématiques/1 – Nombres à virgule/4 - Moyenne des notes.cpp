#include <iostream>
using namespace std;
int main()
{
  int nb, sum = 0;
  cin >> nb;
  for (int i = 0; i < nb; i++)
  {
    int note;
    cin >> note;
    sum += note;
  }
  cout << ((double)sum / nb);
}