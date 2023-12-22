#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
const int MAX_SIZE = 350;

int grid[MAX_SIZE][MAX_SIZE];
int w, h;

int main()
{
    ios::sync_with_stdio(false);
    cin >> h >> w;
    int dp[h + 1][w + 1];
    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            cin >> grid[y][x];
        }
    }

    for (int y = 0; y <= h; y++)
    {
        for (int x = 0; x <= w; x++)
        {
            dp[y][x] = 0;
        }
    }

    int answ = 0;

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            if (grid[y][x] == 1)
            {
                dp[y + 1][x + 1] = 0;
            }
            else
            {
                dp[y + 1][x + 1] = min(min(dp[y][x + 1], dp[y + 1][x]), dp[y][x]) + 1;
                if (dp[y + 1][x + 1] > answ)
                {
                    answ = dp[y + 1][x + 1];
                }
            }
        }
    }

    cout << answ;
}