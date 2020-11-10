#include <bits/stdc++.h>
using namespace std;

//Using dynamic programming (bottom up approach)
//time complexity - O(n)
//space Complexity - O(n)
int dp_minSteps(int n)
{
  int *dp = new int[n + 1];
  dp[1] = 0;

  for (int i = 2; i <= n; i++)
  {
    int y = INT_MAX, z = INT_MAX;
    int x = dp[i - 1];

    if (i % 2 == 0)
      y = dp[i / 2];

    if (i % 3 == 0)
      z = dp[i / 3];

    dp[i] = min(x, min(y, z)) + 1;
  }

  int result = dp[n];
  delete[] dp;

  return result;
}

//Using Memoization (top down approach)
// time complexity - O(n)
//space complexity - o(n)
int countStepsTo1_helper(int n, int *arr)
{
  if (n <= 1)
    return 0;

  // Check if output ady exits
  if (arr[n] != -1)
    return arr[n];

  // Calculate output
  int x = countStepsTo1_helper(n - 1, arr);

  int y = INT_MAX, z = INT_MAX;
  if (n % 2 == 0)
    y = countStepsTo1_helper(n / 2, arr);

  if (n % 3 == 0)
    z = countStepsTo1_helper(n / 3, arr);

  int output = min(x, min(y, z)) + 1;

  //save output for fututre use
  arr[n] = output;

  return arr[n];
}

int countStepsTo1(int n)
{
  int *arr = new int[n + 1];
  for (int i = 0; i <= n; i++)
    arr[i] = -1;

  return countStepsTo1_helper(n, arr);
}

//Using recursion
//time complexity ~ O(3 ^ n) - worst case scenario
int minSteps(int n)
{

  //Base case
  if (n <= 1)
    return 0;

  //Recursive Call
  int x = minSteps(n - 1);

  int y = INT_MAX, z = INT_MAX;
  if (n % 2 == 0)
    y = minSteps(n / 2);

  if (n % 3 == 0)
    z = minSteps(n / 3);

  //Calculating final output
  int ans = min(x, min(y, z)) + 1;

  return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << dp_minSteps(n);
}