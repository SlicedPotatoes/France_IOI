#include <iostream>
using namespace std;
int main()
{
  int bonbons = 0;
  for (int i = 1; i <= 50; i++)
  {
    bonbons += i;
    cout << bonbons << endl;
  }
}