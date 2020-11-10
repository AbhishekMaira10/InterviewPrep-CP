#include <bits/stdc++.h>
using namespace std;

int main()
{
  string A = "Hello World";
  int count = 0;
  int i = A.size() - 1;
  while (A[i] == ' ')
    i--;
  while (A[i] != ' ' && i > 0)
  {
    count++;
    i--;
  }
  cout << count << endl;
  return 0;
}