#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_LENGTH = 50 * 1000;
int arrBA[MAX_LENGTH];
int arrBB[MAX_LENGTH];

int arr[MAX_LENGTH * 2];

int nA;
int nB;

int arrLength = 0;

void fillArr()
{
  nA--;
  nB--;
  int indexInsert = nA + nB + 1;
  while (indexInsert >= 0)
  {
    int a = 0;
    int b = 0;
    if (nA != -1)
    {
      a = arrBA[nA];
    }
    if (nB != -1)
    {
      b = arrBB[nB];
    }
    if (a > b)
    {
      arr[indexInsert] = a;
      nA--;
    }
    else
    {
      arr[indexInsert] = b;
      nB--;
    }
    arrLength++;
    indexInsert--;
  }
}

void showArray()
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin >> nA;
  for (int i = 0; i < nA; i++)
  {
    cin >> arrBA[i];
  }
  cin >> nB;
  for (int i = 0; i < nB; i++)
  {
    cin >> arrBB[i];
  }
  fillArr();
  showArray();
}