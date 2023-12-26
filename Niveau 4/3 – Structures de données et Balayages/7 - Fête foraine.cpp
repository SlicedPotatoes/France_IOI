#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dichotomique(int &start, int n, vector<int> &lots)
{
    int end = lots.size() - 1;

    while (start <= end)
    {
        int m = (start + end) / 2;
        if (lots[m] == n)
        {
            return n;
        }
        else
        {
            if (n > lots[m])
            {
                start = m + 1;
            }
            else
            {
                end = m - 1;
            }
        }
    }

    if (lots[end] > n)
    {
        return lots[start];
    }
    return lots[end];
}

int main()
{
    ios::sync_with_stdio(false);

    int nbCibles;
    cin >> nbCibles;

    vector<int> cibles;
    vector<int> lots;

    for (int i = 0; i < nbCibles; i++)
    {
        int gain;
        cin >> gain;
        cibles.push_back(gain);
    }

    int nbLots;
    cin >> nbLots;

    for (int i = 0; i < nbLots; i++)
    {
        int valeur;
        cin >> valeur;
        lots.push_back(valeur);
    }

    int start = 0;

    for (int element : cibles)
    {
        int f = dichotomique(start, element, lots);
        cout << f << ' ';
    }

    return 0;
}