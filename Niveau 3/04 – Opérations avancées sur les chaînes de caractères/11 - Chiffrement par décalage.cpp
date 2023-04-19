#include <iostream>
#include <string>
using namespace std;
static const int CHAR_REF = 'a';
int main()
{
  ios::sync_with_stdio(false);
  int nbPages;
  cin >> nbPages;
  cin.ignore();
  for (int i = 2; i <= nbPages; i++)
  {
    string message;
    getline(cin, message);
    int decalage = i % 2 == 0 ? (i * -3) : (i * 5); // Calculé un décalage différent si la page est pair ou impair
    int messageLength = message.length();
    for (int j = 0; j < messageLength; j++)
    {
      char c = message[j]; // Char encoded
      if (isalpha(c))      // Si c'est une lettre appliqué l'algorithme de decodage
      {
        int decodedChar = tolower(c) - CHAR_REF; // Récupérer le charactere avec comme valeur 0 Pour A --> 25 Pour Z
        decodedChar = decodedChar + decalage;    // Ajouter le décalage
        decodedChar = decodedChar % 26;          // Apres le décalage faire en sorte que la valeurs sois comprise entre -25 et 25
        if (decodedChar < 0)
        {
          decodedChar += 26; // Si le char a une valeurs négative, y ajoutez 26
        }
        decodedChar += CHAR_REF; // Mettre le char décodé au format ASCII
        if (isupper(c))
        { // Si le charactere de base etait une majuscule, mettre le char décodé en majuscule
          decodedChar = toupper(decodedChar);
        }
        message[j] = decodedChar;
      }
    }
    cout << message << '\n';
  }
}