#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool checkMask(int element, string mask)
{
    string strElement = to_string(element);
    if (strElement.size() == mask.size())
    {
        for (size_t i = 0; i < strElement.size(); i++)
        {
            if (mask[i] != '?' && mask[i] != strElement[i])
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    vector<int> produits;
    cin >> n;
    vector<vector<int>> tree(n + 1);
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        produits.push_back(element);
    }
    for (int i = 0; i < n; i++)
    {
        tree[produits[i]].push_back(i + 1);
    }
    string mask;
    cin >> mask;
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();
        if (currentNode != 0 and checkMask(currentNode, mask))
        {
            cout << currentNode << ' ';
        }
        for (int child : tree[currentNode])
        {
            q.push(child);
        }
    }
}