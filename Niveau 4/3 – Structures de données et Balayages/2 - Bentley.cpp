#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int currentSum = 0;
    int best = 0;
    for (int i = 1; i <= n; i++)
    {
        int element;
        cin >> element;
        currentSum = max(element, currentSum + element);
        best = max(best, currentSum);
    }
    cout << best;
}