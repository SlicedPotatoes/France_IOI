#include <iostream>
#include <vector>

using namespace std;

vector<int> tree{-1};
int nbObj;

int findFirstCommom(int obj1, int obj2)
{
    vector<bool> visited(nbObj + 1, false);
    while (obj1 != -1)
    {
        visited[obj1] = true;
        obj1 = tree[obj1];
    }

    while (obj2 != -1)
    {
        if (visited[obj2])
        {
            return obj2;
        }
        visited[obj2] = true;
        obj2 = tree[obj2];
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> nbObj;
    for (int i = 0; i < nbObj; i++)
    {
        int element;
        cin >> element;
        tree.push_back(element);
    }
    int nbObjSearch;
    cin >> nbObjSearch;
    for (int i = 0; i < nbObjSearch; i++)
    {
        int obj1, obj2;
        cin >> obj1 >> obj2;
        cout << findFirstCommom(obj1, obj2) << '\n';
    }
}