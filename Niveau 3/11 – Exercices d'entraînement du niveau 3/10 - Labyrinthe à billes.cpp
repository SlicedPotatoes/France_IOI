#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    int x, y;
};

struct SortingPoint
{
    char dir;

    SortingPoint(char c) : dir(c)
    {
    }

    bool operator()(Point &p1, Point &p2) const
    {
        if (dir == 'N')
        {
            return p1.y < p2.y;
        }
        else if (dir == 'S')
        {
            return p1.y > p2.y;
        }
        else if (dir == 'E')
        {
            return p1.x > p2.x;
        }
        else if (dir == 'O')
        {
            return p1.x < p2.x;
        }
        else
        {
            cout << "Err: Sort badDir\n";
            return false;
        }
    }
};

int H, W;
vector<Point> listBilles;
const int MAX_LENGTH = 40;
char map[MAX_LENGTH][MAX_LENGTH];

void simuMove(char c)
{
    sort(listBilles.begin(), listBilles.end(), SortingPoint(c));
    int dx = c == 'E' ? 1 : (c == 'O' ? -1 : 0);
    int dy = c == 'S' ? 1 : (c == 'N' ? -1 : 0);

    vector<size_t> needToPop;

    for (size_t i = 0; i < listBilles.size(); i++)
    {
        Point *it = &listBilles[i];
        int x = it->x + dx;
        int y = it->y + dy;

        while (map[y][x] == '.')
        {
            x += dx;
            y += dy;
        }

        map[it->y][it->x] = '.';

        if (map[y][x] == 'O')
        {
            needToPop.push_back(i);
        }
        else
        {
            it->y = y - dy;
            it->x = x - dx;
            map[it->y][it->x] = 'x';
        }
    }

    for (size_t i = 0; i < needToPop.size(); i++)
    {
        listBilles.erase(listBilles.begin() + needToPop[i] - i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> H >> W;
    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < W; x++)
        {
            char element;
            cin >> element;
            map[y][x] = element;
            if (element == 'x')
            {
                listBilles.push_back({x, y});
            }
        }
    }

    int nbCoup;
    cin >> nbCoup;
    for (int i = 0; i < nbCoup; i++)
    {
        char coup;
        cin >> coup;
        simuMove(coup);
    }
    cout << listBilles.size();
}