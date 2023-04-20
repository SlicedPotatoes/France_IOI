#include <iostream>
using namespace std;

const int MAX_LENGTH = 250;
const int INDEX_HELPER_LENGTH = 4;
const int INDEX_HELPER[INDEX_HELPER_LENGTH][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

int h, l;

void copyArray(char arr1[MAX_LENGTH][MAX_LENGTH], char arr2[MAX_LENGTH][MAX_LENGTH])
{
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < l; j++)
    {
      arr1[i][j] = arr2[i][j];
    }
  }
}

void erosion(char image[MAX_LENGTH][MAX_LENGTH], char temp[MAX_LENGTH][MAX_LENGTH])
{
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < l; j++)
    {
      if (image[i][j] == '#')
      {
        int countNoir = 0;
        for (int iHP = 0; iHP < INDEX_HELPER_LENGTH; iHP++)
        {
          int _i = i + INDEX_HELPER[iHP][0];
          int _j = j + INDEX_HELPER[iHP][1];
          bool validIndex = _i >= 0 && _i < h && _j >= 0 && _j < l;
          if (validIndex && image[_i][_j] == '#')
          {
            countNoir++;
          }
        }
        if (countNoir < 4)
        {
          temp[i][j] = '.';
        }
        else
        {
          temp[i][j] = '#';
        }
      }
      else
      {
        temp[i][j] = '.';
      }
    }
  }
  copyArray(image, temp);
}

void printArray(char arr[MAX_LENGTH][MAX_LENGTH])
{
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < l; j++)
    {
      cout << arr[i][j];
    }
    cout << '\n';
  }
}
int main()
{
  ios::sync_with_stdio(false);
  char image[MAX_LENGTH][MAX_LENGTH];
  char tempImage[MAX_LENGTH][MAX_LENGTH];
  int n;
  cin >> n >> h >> l;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < l; j++)
    {
      cin >> image[i][j];
    }
  }
  for (int nbErosion = 0; nbErosion < n; nbErosion++)
  {
    erosion(image, tempImage);
  }
  printArray(image);
}
