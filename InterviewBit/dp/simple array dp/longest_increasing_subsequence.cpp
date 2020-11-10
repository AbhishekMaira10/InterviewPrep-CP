#include <bits/stdc++.h>
using namespace std;

int lis(const vector<int> &A)
{
  vector<int> output(A.size(), 1);

  for (int i = 1; i < A.size(); i++)
  {
    for (int j = i - 1; j >= 0; j--)
    {
      if (A[i] > A[j])
        output[i] = max(output[i], output[j] + 1);
    }
  }

  return *max_element(output.begin(), output.end());
}
