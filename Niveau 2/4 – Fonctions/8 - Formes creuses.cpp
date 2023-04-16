#include <iostream>
using namespace std;

void lignePleine(int length, char motif)
{
  for (int i = 0; i < length; i++)
  {
    cout << motif;
  }
  cout << endl;
}

void ligneCreuse(int length, char motif)
{
  if (length > 1)
  {
    cout << motif;
  }
  for (int i = 0; i < length - 2; i++)
  {
    cout << " ";
  }
  cout << motif << endl;
}

void rectangle(int length, int height)
{
  lignePleine(length, '#');
  for (int i = 0; i < height - 2; i++)
  {
    ligneCreuse(length, '#');
  }
  lignePleine(length, '#');
}

void triangle(int length)
{
  cout << '@' << endl;
  for (int i = 2; i < length; i++)
  {
    ligneCreuse(i, '@');
  }
  lignePleine(length, '@');
}

int main()
{
  int ligne, lRec, cRec, tri;
  cin >> ligne >> lRec >> cRec >> tri;

  lignePleine(ligne, 'X');
  cout << endl;
  rectangle(cRec, lRec);
  cout << endl;
  triangle(tri);
}