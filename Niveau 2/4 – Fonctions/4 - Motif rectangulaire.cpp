#include <iostream>
using namespace std;

void drawLine(int length, char motif)
{
  for (int i = 0; i < length; i++)
  {
    cout << motif;
  }
  cout << endl;
}

void drawRectangle(int length, int height, char motif)
{
  for (int i = 0; i < height; i++)
  {
    drawLine(length, motif);
  }
}

int main()
{
  int height, length;
  char motif;
  cin >> height >> length >> motif;
  drawRectangle(length, height, motif);
}