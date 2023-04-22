#include <iostream>
using namespace std;

const int MAX_LENGTH = 100 * 1000;
int indexMin = 0;
int indexMax = 0;

int main()
{
  ios::sync_with_stdio(false);
  int length, longueur, river[MAX_LENGTH];
  cin >> longueur >> length;
  int sum = 0;
  for (int i = 0; i < longueur; i++)
  {
    int element;
    cin >> element;
    sum += element;
    river[indexMax] = element;
    indexMax++;
  }
  int maxSum = sum;
  // cout << "DEBUG " << sum << '\n'; //DEBUG
  for (int i = 0; i < length - longueur; i++)
  {
    int element;
    cin >> element;
    river[indexMax] = element;
    sum = sum - river[indexMin] + element;
    if (sum > maxSum)
    {
      maxSum = sum;
    }
    indexMin++;
    indexMax++;
    // cout << "DEBUG " << element << ' ' << sum << '\n'; //DEBUG
  }
  cout << maxSum;
}
