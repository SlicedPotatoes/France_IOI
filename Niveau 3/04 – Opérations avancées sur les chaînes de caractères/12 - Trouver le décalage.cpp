#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

static const int CHAR_REF = 'a';
static const double FREQUENCE_FR[26] = {
    8.15, /*A*/ 0.97, /*B*/ 3.15, /*C*/ 3.73, /*D*/ 17.39, /*E*/ 1.12, /*F*/ 0.97, /*G*/ 0.85, /*H*/ 7.31, /*I*/ 0.45, /*J*/ 0.02, /*K*/ 5.69, /*L*/ 2.87, /*M*/
    7.12, /*N*/ 5.28, /*O*/ 2.8, /*P*/ 1.21, /*Q*/ 6.64, /*R*/ 8.14, /*S*/ 7.22, /*T*/ 6.38, /*U*/ 1.64, /*V*/ 0.03, /*W*/ 0.41, /*X*/ 0.28, /*Y*/ 0.15    /*Z*/
};
static string allString[25] = {""};

char appliquerDecalageChar(int decalage, char c)
{
  if (isalpha(c))
  {
    int newChar = tolower(c) - CHAR_REF;
    newChar = ((newChar + decalage) % 26) + CHAR_REF;
    if (isupper(c))
    {
      newChar = toupper(newChar);
    }
    return newChar;
  }
  return c;
}
void appliquerDecalageString(string s)
{
  for (int index = 0; index < (int)s.length(); index++)
  {
    char c = s[index];
    for (int decalage = 1; decalage < 26; decalage++)
    {
      allString[decalage - 1] += appliquerDecalageChar(decalage, c);
    }
  }
}

double getScoreProbaFR(string s)
{
  int effectifs[26] = {0};
  int length = 0;
  double score = 0;
  for (int i = 0; i < (int)s.length(); i++)
  {
    char c = s[i];
    if (isalpha(c))
    {
      effectifs[tolower(c) - CHAR_REF]++;
      length++;
    }
  }
  if (length == 0)
  {
    return 1;
  }
  for (int i = 0; i < 26; i++)
  {
    double frequenceChar = (double)effectifs[i] / length;
    score += pow(FREQUENCE_FR[i] - frequenceChar, 2);
  }
  return score;
}

int main()
{
  ios::sync_with_stdio(false);
  string s;
  getline(cin, s);
  appliquerDecalageString(s);
  double min = numeric_limits<double>::max();
  string minString = "";
  for (int i = 0; i < 25; i++)
  {
    string _s = allString[i];
    double proba = getScoreProbaFR(_s);
    if (proba < min)
    {
      min = proba;
      minString = _s;
    }
  }
  cout << minString;
}
