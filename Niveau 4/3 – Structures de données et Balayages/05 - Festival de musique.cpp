#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

const int MAX_DAY = 100000;

int main()
{
    ios::sync_with_stdio(false);

    int nbJours, nbGroupes;
    cin >> nbJours >> nbGroupes;

    vector<bool> groupesVue(nbGroupes, false);
    int nbGroupesVue = 0;

    vector<int> lastSeenGroup(nbGroupes, -1);

    int m = MAX_DAY;

    for (int i = 1; i <= nbJours; i++)
    {
        int groupe;
        cin >> groupe;
        groupe -= 1;

        lastSeenGroup[groupe] = i;

        if (nbGroupesVue != nbGroupes)
        {
            if (!groupesVue[groupe])
            {
                nbGroupesVue++;
                groupesVue[groupe] = true;
            }
        }
        if (nbGroupesVue == nbGroupes)
        {
            int minDay = MAX_DAY;
            int maxDay = 0;
            for (int element : lastSeenGroup)
            {
                minDay = min(minDay, element);
                maxDay = max(maxDay, element);
            }
            m = min(m, maxDay - minDay);
        }
    }

    cout << m + 1;
}