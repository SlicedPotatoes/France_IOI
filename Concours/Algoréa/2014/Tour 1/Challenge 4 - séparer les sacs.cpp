#include "robot.h"
#include <queue>
#include <vector>

using namespace std;

int simu(vector<bool> bags, bool mod, bool execute)
{
    int result = 0;
    queue<int> currEmpty;

    for (int i = 0; i < bags.size(); i++)
    {
        if (execute && i != 0)
        {
            avance(1);
        }
        if (i % 2 == mod)
        {
            if (!bags[i])
            {
                currEmpty.push(i);
            }
        }
        else
        {
            if (bags[i])
            {
                if (!currEmpty.empty())
                {
                    if (execute)
                    {
                        ramasse();
                        recule(i - currEmpty.front());
                        pose();
                        avance(i - currEmpty.front());
                    }
                    result += i - currEmpty.front();
                    bags[i] = false;
                    bags[currEmpty.front()] = true;
                    currEmpty.pop();
                }
                else
                {
                    int pos = i;
                    while (true)
                    {
                        if (pos % 2 == mod && !bags[pos])
                        {
                            break;
                        }
                        pos++;
                    }

                    if (execute)
                    {
                        ramasse();
                        avance(pos - i);
                        pose();
                        recule(pos - i);
                    }

                    result += pos - i;
                    bags[i] = false;
                    bags[pos] = true;
                }
            }
        }
    }
    return result;
}

int main()
{
    int bags = nbSacs();
    int size = bags * 2;

    vector<bool> arr(size, false);
    arr[0] = sacDansCase();

    for (int i = 1; i < size; i++)
    {
        avance(1);
        arr[i] = sacDansCase();
    }
    recule(size - 1);

    int simu1 = simu(arr, 0, 0);
    int simu2 = simu(arr, 1, 0);

    if (simu1 > simu2)
    {
        simu(arr, 1, 1);
    }
    else
    {
        simu(arr, 0, 1);
    }

    return 0;
}