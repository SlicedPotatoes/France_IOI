#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int nbIntervalles;
    cin >> nbIntervalles;

    vector<pair<int, int>> intervals;

    for (int i = 0; i < nbIntervalles; i++)
    {
        int start, end;
        cin >> start >> end;

        intervals.push_back({start, end});
    }

    sort(intervals.begin(), intervals.end());

    int ans = 0;
    int last = -1;

    for (pair<int, int> &p : intervals)
    {
        int start = p.first;
        int end = p.second;

        if (start < last)
        {
            start = last;
        }

        if (start > end)
        {
            continue;
        }

        last = end;
        ans += end - start;
    }

    cout << ans;
}