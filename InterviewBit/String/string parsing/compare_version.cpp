#include <bits/stdc++.h>
using namespace std;

int compareVersion(string A, string B)
{
  unsigned long long a = 0, b = 0;
  for (int i = 0, j = 0; (i < A.length()) || (j < B.length());)
  {
    while (i < A.length() && A[i] != '.')
    {
      a += a * 10 + (A[i] - '0');
      i++;
    }

    while (j < B.length() && B[j] != '.')
    {
      b += b * 10 + (B[j] - '0');
      j++;
    }

    if (a > b)
      return 1;
    if (b > a)
      return -1;
    a = 0;
    b = 0;
    i++;
    j++;
  }
  return 0;
}