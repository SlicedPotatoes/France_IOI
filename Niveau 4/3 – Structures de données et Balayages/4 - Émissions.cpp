#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int nbEmissions, dureeMax;
    cin >> nbEmissions >> dureeMax;

    vector<int> t(nbEmissions);

    int maxConsecutive = 0;
    int currentConsecutive = 0;

    int currentSum = 0;

    for (int i = 0; i < nbEmissions; i++)
    {
        int dureeEmission;
        cin >> dureeEmission;
        t.push_back(dureeEmission);

        int current = currentSum + dureeEmission;

        if (current > dureeEmission)
        {
            currentSum = current;
            currentConsecutive++;
        }
        else
        {
            currentSum = dureeEmission;
            currentConsecutive = 1;
        }

        if (currentSum > dureeMax)
        {
            currentSum -= t[t.size() - currentConsecutive];
            currentConsecutive -= 1;
        }

        maxConsecutive = max(maxConsecutive, currentConsecutive);
    }

    cout << maxConsecutive;
}