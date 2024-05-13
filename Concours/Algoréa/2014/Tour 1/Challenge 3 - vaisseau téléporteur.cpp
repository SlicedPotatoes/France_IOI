#include "robot.h"
#include <vector>

using namespace std;

int main()
{
    int nbCol = nbColonnes();
    int nbRow = nbLignes();

    // Précalculer des "scores" pour chaque case

    vector<vector<int>> dp(nbRow, vector<int>(nbCol, -1));
    for (int j = nbCol - 1; j >= 0; j--)
    {
        int start = hauteurMin(j);
        int end = hauteurMax(j);

        for (; start <= end; start++)
        {
            if (j == nbCol - 1 || dp[start][j + 1] == -1)
            {
                dp[start][j] = 0;
                continue;
            }
            dp[start][j] = dp[start][j + 1] + 1;
        }
    }

    // Faire la simulation, aidé par les scores précalculés pour prendre les "meilleurs" décisions.

    int currCol = 0;
    int currRow = 0;

    while (currCol != nbCol - 1)
    {
        int bestScore = -1;
        int bestIndex = -1;

        for (int i = 0; i < nbRow; i++)
        {
            if (dp[i][currCol] > bestScore)
            {
                bestScore = dp[i][currCol];
                bestIndex = i;
            }
        }

        if (currRow != bestIndex)
        {
            teleporte(bestIndex);
            currRow = bestIndex;
        }

        avance(bestScore);
        currCol += bestScore;
    }
}