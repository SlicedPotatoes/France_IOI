#include <iostream>
#include <vector>

using namespace std;

struct node
{
  int value;
  vector<node *> childs;
};

const int MAX_LENGTH = 20 * 1000 + 1;
node reserves[MAX_LENGTH];
int length;

void createTree()
{
  reserves[0] = {0, {}};
  for (int i = 0; i <= length; i++)
  {
    reserves[i] = {0, {}};
  }
  for (int i = 1; i <= length; i++)
  {
    int pos;
    cin >> pos;
    reserves[pos].childs.push_back(&reserves[i]);
  }
}

int dfs(node *n, int deep)
{
  if (n->childs.size() == 0)
  {
    return deep;
  }
  int max = 0;
  for (int i = 0; i < (int)n->childs.size(); i++)
  {
    node *child = n->childs[i];
    int value = dfs(child, deep + 1);
    if (value > max)
    {
      max = value;
    }
  }
  return max;
}

int main()
{
  ios::sync_with_stdio(false);
  cin >> length;
  createTree();
  cout << dfs(&reserves[0], 0);
}