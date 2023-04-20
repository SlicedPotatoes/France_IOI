#include <iostream>
using namespace std;

const int MAX_SIZE = 40;
const int I_HELPER_LENGTH = 8;
const int PIONT_CONSECUTIF = 5;
const int IndexHelper[I_HELPER_LENGTH][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int main()
{
  ios::sync_with_stdio(false);
  int plateau[MAX_SIZE][MAX_SIZE], length;
  cin >> length;
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cin >> plateau[i][j];
    }
  }
  for (int iLig = 0; iLig < length; iLig++)
  {
    for (int iCol = 0; iCol < length; iCol++)
    {
      if (plateau[iLig][iCol] != 0)
      {
        int player = plateau[iLig][iCol];
        for (int iHelper = 0; iHelper < I_HELPER_LENGTH; iHelper++)
        {
          int count = 1;
          int _i = IndexHelper[iHelper][0];
          int _j = IndexHelper[iHelper][1];
          for (int i = 1; i < PIONT_CONSECUTIF; i++)
          {
            int _iLig = iLig + (_i * i), _iCol = iCol + (_j * i);
            bool validIndex = _iLig >= 0 && _iLig < length && _iCol >= 0 && _iCol < length;
            if (!validIndex || plateau[_iLig][_iCol] != player)
            {
              break;
            }
            count++;
          }
          if (count == PIONT_CONSECUTIF)
          {
            cout << player;
            return 0;
          }
        }
      }
    }
  }
  cout << 0;
}
