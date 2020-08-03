#include <bits/stdc++.h>
using namespace std;

// Recursive solution
int minCostPath_helper(int **input, int m, int n, int i, int j)
{
  //Base Case
  if (i == m - 1 && j == n - 1)
    return input[i][j];

  if (i >= m || j >= n)
    return INT_MAX;

  //Recursive Calls
  int x = minCostPath_helper(input, m, n, i, j + 1);
  int y = minCostPath_helper(input, m, n, i + 1, j + 1);
  int z = minCostPath_helper(input, m, n, i + 1, j);

  //small calculation
  int ans = min(x, min(y, z)) + input[i][j];
  return ans;
}

int minCostPath(int **input, int m, int n)
{
  return minCostPath_helper(input, m, n, 0, 0);
}