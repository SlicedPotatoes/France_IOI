#include <iostream>
using namespace std;
int main()
{
  int nbParTeam, t1 = 0, t2 = 0;
  cin >> nbParTeam;
  for (int i = 0; i < nbParTeam; i++)
  {
    int _t1, _t2;
    cin >> _t1 >> _t2;
    t1 += _t1;
    t2 += _t2;
  }
  cout << "L'équipe " << (t1 > t2 ? 1 : 2) << " a un avantage" << endl;
  cout << "Poids total pour l'équipe 1 : " << t1 << endl;
  cout << "Poids total pour l'équipe 2 : " << t2 << endl;
}