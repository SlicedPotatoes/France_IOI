#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int nbParticipants;
  cin >> nbParticipants;
  int participants[nbParticipants] = {0};
  for (int i = 0; i < nbParticipants; i++)
  {
    int num;
    cin >> num;
    participants[i] = num;
  }
  sort(&participants[0], &participants[nbParticipants]);
  for (int i = 0; i < nbParticipants / 2; i++)
  {
    cout << participants[i] << " " << participants[nbParticipants - 1 - i] << endl;
  }
}