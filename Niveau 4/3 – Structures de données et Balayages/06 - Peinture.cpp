#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int nbQuantites, quantiteRecherchee;
    cin >> nbQuantites >> quantiteRecherchee;

    vector<int> quantites;

    for (int i = 0; i < nbQuantites; i++)
    {
        int quantite;
        cin >> quantite;
        quantites.push_back(quantite);

        if (quantite * 2 == quantiteRecherchee)
        {
            cout << "OUI";
            return 0;
        }
        if (i > 0 && quantite + quantites[0] > quantiteRecherchee)
        {
            break;
        }
    }

    for (int element : quantites)
    {
        int toFind = quantiteRecherchee - element;
        if (find(quantites.begin(), quantites.end(), toFind) != quantites.end())
        {
            cout << "OUI";
            return 0;
        }
    }

    cout << "NON";
    return 0;
}