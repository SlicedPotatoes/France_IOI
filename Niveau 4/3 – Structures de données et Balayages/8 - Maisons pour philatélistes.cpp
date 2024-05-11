#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int main()
{

    int nbMaisons;
    cin >> nbMaisons;

    vector<int> maisons(nbMaisons, 0);

    for (int i = 0; i < nbMaisons; i++)
    {
        cin >> maisons[i];
    }

    sort(maisons.begin(), maisons.end());

    int ans = INT_MAX;
    for (int i = 1; i < nbMaisons; i++)
    {
        int d = abs(maisons[i - 1] - maisons[i]);
        ans = min(ans, d);
    }

    cout << ans;
}