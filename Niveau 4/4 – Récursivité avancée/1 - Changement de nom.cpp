#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<char> &letters, int size, string &curr)
{
    if (curr.size() == size)
    {
        cout << curr << '\n';
        return;
    }

    for (char c : letters)
    {
        curr.push_back(c);
        backtrack(letters, size, curr);
        curr.pop_back();
    }
}

int main()
{
    int nbLettre;
    cin >> nbLettre;

    vector<char> arr(nbLettre, ' ');

    for (int i = 0; i < nbLettre; i++)
    {
        cin >> arr[i];
    }

    int size;
    cin >> size;

    cout << pow(nbLettre, size) << '\n';

    string curr;
    backtrack(arr, size, curr);
}