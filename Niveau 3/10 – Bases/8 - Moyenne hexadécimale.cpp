#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin >> hex >> n;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> hex >> element;
        sum += element;
    }

    stringstream ss;

    ss << hex << sum / n;

    string result = ss.str();

    for (char c : result)
    {
        cout << (char)toupper(c);
    }
}