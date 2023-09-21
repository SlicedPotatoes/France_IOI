#include <iostream>

using namespace std;

const int MAX_ELEVE = 250 * 1000 + 1;
bool arr[MAX_ELEVE];

int main()
{
  ios::sync_with_stdio(false);
  int N, P;
  cin >> N >> P;
  int minEleve = 1;
  for (int i = 0; i < P; i++)
  {
    int idEleve;
    cin >> idEleve;
    if (idEleve < MAX_ELEVE)
    {
      arr[idEleve] = true;
      while (minEleve != -1 && minEleve < MAX_ELEVE && arr[minEleve])
      {
        minEleve++;
        if (minEleve == N + 1)
        {
          minEleve = -1;
        }
      }
    }
    cout << minEleve << '\n';
  }
  return 0;
}