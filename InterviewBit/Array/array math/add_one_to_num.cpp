#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A)
{
  reverse(A.begin(), A.end());
  A.push_back(0);
  for (int i = 0; i < A.size(); ++i)
  {
    if (A[i] == 9)
    {
      A[i] = 0;
    }
    else
    {
      A[i]++;
      break;
    }
  }
  int i = A.size() - 1;
  while (A[i--] == 0)
    A.pop_back();

  reverse(A.begin(), A.end());

  return A;
}

int main()
{
  vector<int> A = {9, 9, 9};
  plusOne(A);
  return 0;
}
