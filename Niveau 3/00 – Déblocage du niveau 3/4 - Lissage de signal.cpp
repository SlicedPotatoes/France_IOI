#include <iostream>
#include <cmath>
using namespace std;

double getMaxDiff(double arr[100], int nbMesures)
{
  double diff = 0;
  for (int i = 0; i < nbMesures - 1; i++)
  {
    double d = abs(arr[i] - arr[i + 1]);
    if (d > diff)
    {
      diff = d;
    }
  }
  return diff;
}

int main()
{
  double mesures[100] = {0.0};
  int nbMesures, nbLissage = 0;
  double diffMax;
  cin >> nbMesures >> diffMax;
  for (int i = 0; i < nbMesures; i++)
  {
    cin >> mesures[i];
  }

  /*cout << "Lissage 0\t";              //
  for (int i = 0; i < nbMesures; i++) //
  {                                   //
    cout << mesures[i] << "\t";       // DEBUG
  }                                   //
  cout << endl;                       //*/

  bool end = false;
  if (getMaxDiff(mesures, nbMesures) <= diffMax)
  {
    end = true;
  }
  while (!end)
  {
    end = true;
    // Crée un nouveau tableau et le remplir du 1er et dernier element
    double _mesures[100] = {0.0};
    _mesures[0] = mesures[0];
    _mesures[nbMesures - 1] = mesures[nbMesures - 1];

    // cout << "Lissage " << nbLissage << "\t" << mesures[0] << "\t"; // DEBUG

    // Parcourir le tableau est procédé au lissage
    for (int i = 1; i < nbMesures - 1; i++)
    {
      double element1 = mesures[i - 1], element2 = mesures[i + 1];
      double element = (element1 + element2) / 2;
      _mesures[i] = element;
      // cout << element << "\t"; // DEBUG
    }

    // Copie le nouveau tableau a la place du premier
    for (int i = 1; i < nbMesures - 1; i++)
    {
      mesures[i] = _mesures[i];
    }

    // Verifier si le lissage est suffisant, si c'est le cas sortir de la boucle
    if (getMaxDiff(_mesures, nbMesures) > diffMax)
    {
      end = false;
    }
    // cout << mesures[nbMesures - 1] << endl; // DEBUG
    nbLissage++; // Incrémenté le nb de lissage
  }
  cout << nbLissage;
}
