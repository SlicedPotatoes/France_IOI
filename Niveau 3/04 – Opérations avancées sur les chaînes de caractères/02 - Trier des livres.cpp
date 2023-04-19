#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  cin.ignore();
  string titles[n] = {""};
  for (int i = 0; i < n; i++)
  {
    getline(cin, titles[i]);
  }
  sort(titles, titles + n);
  for (int i = 0; i < n; i++)
  {
    cout << titles[i] << "\n";
  }
}
