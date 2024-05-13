#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<char> &letters, int size, string &curr, vector<bool> usedLetter)
{
    if (curr.size() == size)
    {
        cout << curr << '\n';
        return;
    }

    for (int i = 0; i < letters.size(); i++)
    {
        if (usedLetter[i])
        {
            continue;
        }
        curr.push_back(letters[i]);
        usedLetter[i] = true;
        backtrack(letters, size, curr, usedLetter);
        curr.pop_back();
        usedLetter[i] = false;
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

    // Calcul combinaison
    int combinaison = 1;
    for (int i = 0; i < size; i++)
    {
        combinaison *= nbLettre - i;
    }

    cout << combinaison << '\n';

    string curr;
    vector<bool> usedLetter(nbLettre, false);

    backtrack(arr, size, curr, usedLetter);
}