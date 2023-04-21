// Algorithme : "Le tri à bulle"
#include <iostream>
using namespace std;

const int MAX_AUTO = 1000;
int arr[MAX_AUTO];
int length;

void trieABulle()
{
  int output[MAX_AUTO * MAX_AUTO][2];
  int count = 0;
  for (int nbIteration = 0; nbIteration < length; nbIteration++)
  {
    for (int i = 0; i < length - 1; i++)
    {
      int element1 = arr[i];
      int element2 = arr[i + 1];
      if (element1 > element2)
      {
        arr[i + 1] = element1;
        arr[i] = element2;
        output[count][0] = element1;
        output[count][1] = element2;
        count++;
      }
    }
  }
  cout << count << '\n';
  for (int i = 0; i < count; i++)
  {
    cout << output[i][0] << ' ' << output[i][1] << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin >> length;
  for (int i = 0; i < length; i++)
  {
    cin >> arr[i];
  }
  trieABulle();
}
