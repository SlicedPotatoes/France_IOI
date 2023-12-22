#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> tree;
int n;

void dfs(vector<int> &node)
{
    for (size_t i = 0; i < node.size(); i++)
    {
        cout << "A " << node[i] << '\n';
        dfs(tree[node[i]]);
        cout << "R " << node[i] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        tree.push_back({});
        int count;
        cin >> count;
        for (int j = 0; j < count; j++)
        {
            int element;
            cin >> element;
            tree[i].push_back(element);
        }
    }
    dfs(tree[0]);
}