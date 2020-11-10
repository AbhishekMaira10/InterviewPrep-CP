#include <bits/stdc++.h>
using namespace std;

int main()
{
  string A = "Hello World";
  int result = 1;
  string output;
  for (int i = 0; i < output.size(); i++)
  {
    if (isalnum(A[i]))
      output += tolower(A[i]);
  }
  cout << output;
  int j = output.length() - 1;
  for (int i = 0; i < output.length() / 2; i++)
  {
    if (output[i] != output[j - i])
    {
      result = 0;
      cout << result;
      break;
    }
    else
      continue;
  }

  cout << result << endl;

  return 0;
}