#include "robot.h"

int main()
{
    avance(1);
    prends();

    int caseVide = 1;

    for (int idCase = 1; idCase <= 13; idCase++)
    {
        avance(1);
        if (plusLourdDansCaisse())
        {
            recule(idCase - caseVide + 1);
            pose();
            avance(idCase - caseVide + 1);
            caseVide = idCase + 1;
            prends();
        }
    }

    avance(1);
    pose();

    return 0;
}