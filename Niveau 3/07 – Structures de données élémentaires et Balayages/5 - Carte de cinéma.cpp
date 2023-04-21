#include <iostream>
using namespace std;

const int MAX_ELEMENTS = 100 * 1000;
int clients[MAX_ELEMENTS];
int actualLength = 0;

void showArray()
{
  for (int i = 0; i < actualLength; i++)
  {
    cout << clients[i] << '\n';
  }
}

int findClient(int n)
{
  int min = 0;
  int max = actualLength;

  while (min <= max)
  {
    int mid = (min + max) / 2;
    int client = clients[mid];
    if (client > n)
    {
      max = mid - 1;
    }
    else if (client < n)
    {
      min = mid + 1;
    }
    else
    {
      return -1;
    }
  }
  return min;
}

bool addClient(int n)
{
  int index = findClient(n);
  if (index == -1)
  {
    return false;
  }

  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  int length;
  cin >> length;
  for (int i = 0; i < length; i++)
  {
  }
}
