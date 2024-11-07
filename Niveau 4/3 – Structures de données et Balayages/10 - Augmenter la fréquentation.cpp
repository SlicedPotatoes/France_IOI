#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++)
    {
        int d, f;
        cin >> d >> f;

        arr.push_back({d, f});
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    int total = 0;
    double maxMoy = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i].second;
        double moy = total / double(i + 1);

        if (moy >= maxMoy)
        {
            maxMoy = moy;
            ans = arr[i].first;
        }
    }

    cout << ans;
}