#include <iostream>
using namespace std;
int main()
{
  int element;
  cin >> element;
  while (element != 1)
  {
    cout << element << endl;
    if (element % 2 == 1)
    {
      element = element * 3 + 1;
    }
    else
    {
      element /= 2;
    }
  }
  cout << 1;
}