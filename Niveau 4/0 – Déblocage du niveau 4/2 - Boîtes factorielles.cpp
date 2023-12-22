#include <iostream>
#include <vector>

using namespace std;

int factorielle(int n)
{
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        f *= i + 1;
    }
    return f;
}

int main()
{
    ios::sync_with_stdio(false);

    vector<int> boite(13, 0);

    int nPetitsPois;
    cin >> nPetitsPois;

    int size = 0;

    while (nPetitsPois != 0)
    {
        int f = 1;
        while (factorielle(f) <= nPetitsPois)
        {
            f += 1;
        }
        f -= 1;
        nPetitsPois -= factorielle(f);

        if (f > size)
        {
            size = f;
        }
        boite[f] += 1;
    }
    cout << size << '\n';
    for (int i = 1; i <= size; i++)
    {
        cout << boite[i] << ' ';
    }
}