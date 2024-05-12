#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int nbPlateformes;
    cin >> nbPlateformes;

    vector<int> precomputed(nbPlateformes, 0);

    for (int i = 1; i <= nbPlateformes; i++)
    {
        int start;
        cin >> start;

        precomputed[i - 1] = start;
    }

    int currentIndex = nbPlateformes;
    int ans = 0;

    while (currentIndex != 1)
    {
        int start = precomputed[currentIndex - 1];
        int best = currentIndex;
        int index = currentIndex;
        for (; start < currentIndex; start++)
        {
            int n = precomputed[start - 1];
            if (n < best)
            {
                best = n;
                index = start;
            }
        }
        if (currentIndex == index)
        {
            ans = -1;
            break;
        }
        ans++;
        currentIndex = index;
    }
    cout << ans;
}