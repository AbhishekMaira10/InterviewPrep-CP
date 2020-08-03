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
