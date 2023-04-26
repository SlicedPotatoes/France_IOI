#include <iostream>
using namespace std;

void recur(int min, int max)
{
  cout << min << ' ';
  if (min == max)
  {
    return;
  }
  recur(min + 1, max);
}

int main()
{
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  recur(N, M);
}