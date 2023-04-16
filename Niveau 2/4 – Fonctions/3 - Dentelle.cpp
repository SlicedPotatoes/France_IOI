#include <iostream>
using namespace std;

void draw(int length, char motif)
{
  for (int i = 0; i < length; i++)
  {
    cout << motif;
  }
  cout << endl;
}

int main()
{
  int length;
  cin >> length;
  draw(length, 'X');
  draw(length, '#');
  draw(length, 'i');
}