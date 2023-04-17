#include <iostream>
using namespace std;
int main()
{
  char c;
  int i;
  int charRef = (int)'A';
  cin >> c >> i;
  cout << (int)c - charRef << (char)i + charRef;
}