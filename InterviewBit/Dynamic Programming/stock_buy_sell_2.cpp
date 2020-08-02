#include <bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int> &A)
{
  int n = A.size();
  if (n == 0)
    return 0;
  int dp[n];
  dp[0] = 0;
  for (int i = 1; i < n; i++)
  {
    if (A[i] > A[i - 1])
      dp[i] = dp[i - 1] + (A[i] - A[i - 1]);

    else
      dp[i] = dp[i - 1];
  }

  return dp[n - 1];
}
