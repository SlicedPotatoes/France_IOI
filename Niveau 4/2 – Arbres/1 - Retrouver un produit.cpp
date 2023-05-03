#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_LENGTH = 20 * 1000 + 1;
int reserves[MAX_LENGTH];
int length;

vector<int> dfs(int element, vector<int> result)
{
  if (element == 0)
  {
    reverse(result.begin(), result.end());
    return result;
  }
  result.push_back(element);
  return dfs(reserves[element], result);
}

int main()
{
  ios::sync_with_stdio(false);
  cin >> length;
  for (int i = 1; i <= length; i++)
  {
    cin >> reserves[i];
  }
  int nbElements;
  cin >> nbElements;
  for (int i = 0; i < nbElements; i++)
  {
    int element;
    cin >> element;
    vector<int> result = dfs(element, {});
    for (int el : result)
    {
      cout << el << ' ';
    }
    cout << '\n';
  }
}