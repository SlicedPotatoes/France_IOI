#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int nbJour, nbPeriode;

    vector<int> periodes = {0};

    cin >> nbJour >> nbPeriode;
    int somme = 0;
    for (int i = 0; i < nbJour; i++)
    {
        int visiteur;
        cin >> visiteur;
        somme += visiteur;
        periodes.push_back(somme);
    }

    for (int i = 0; i < nbPeriode; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << periodes[end] - periodes[start - 1] << '\n';
    }
}