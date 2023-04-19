#include <iostream>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  string lastTitle = "";
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    string title;
    getline(cin, title);
    if (title > lastTitle)
    {
      cout << title << "\n";
      lastTitle = title;
    }
  }
}
