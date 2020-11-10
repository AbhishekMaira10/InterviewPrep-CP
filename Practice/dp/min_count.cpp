#include <bits/stdc++.h>
using namespace std;

// min count using memoization

int minCount_helper(int n, int *arr)
{
  if (n == 0)
    return 0;

  if (arr[n] != -1)
    return arr[n];

  int ans = n;
  for (int i = 1; i < sqrt(n); i++)
  {
    int sub_ans = minCount_helper(n - i * i, arr);
    if (sub_ans < ans)
      ans = sub_ans;
  }

  arr[n] = ans + 1;
  return arr[n];
}

int minCount(int n)
{
  int *arr = new int[n + 1];
  for (int i = 0; i <= n; i++)
    arr[i] = -1;

  return minCount_helper(n, arr);
}

int minCount_dp(int n)
{
  int *dp = new int[n + 1];

  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    dp[i] = INT_MAX;
    for (int j = 1; (i - j * j) >= 0; j++)
      dp[i] = min(dp[i], dp[(i - j * j)]);
    dp[i]++;
  }

  return dp[n];
}
