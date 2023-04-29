#include <iostream>

using namespace std;
const int MAX_LENGTH = 300 * 2;
char arr[MAX_LENGTH][MAX_LENGTH];

int main()
{
  ios::sync_with_stdio(false);
  int length;
  string word;
  cin >> length >> word;
  for (int i = 0; i < length; i++)
  {
    char c = word[length - i - 1];
    for (int j = i; j < length * 2 - 1 - i; j++)
    {
      arr[i][j] = c;
      arr[j][i] = c;
      arr[length * 2 - 2 - i][j] = c;
      arr[j][length * 2 - 2 - i] = c;
    }
  }
  for (int i = 0; i < length * 2 - 1; i++)
  {
    for (int j = 0; j < length * 2 - 1; j++)
    {
      cout << arr[i][j];
    }
    cout << '\n';
  }
}