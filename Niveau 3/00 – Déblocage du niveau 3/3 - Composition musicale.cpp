#include <iostream>
#include <string>
using namespace std;

int main()
{
  string partition;
  cin >> partition;

  char output[501] = {' '};

  int outputPos = -1;

  for (int i = 0; i < (int)partition.length(); i++)
  {
    if (outputPos >= 0 && output[outputPos] == partition[i])
    {
      outputPos--;
    }
    else
    {
      outputPos++;
      output[outputPos] = partition[i];
    }
  }

  for (int i = 0; i < outputPos + 1; i++)
  {
    cout << output[i];
  }
}
