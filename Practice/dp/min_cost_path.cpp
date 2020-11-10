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

//Memoization Solution
//time complexity - O(m*n) as there are m*n unique calls
//space complexity - O(m*n)
int minCostPath_mem(int **input, int m, int n, int i, int j, int **output)
{
  //Base Case
  if (i == m - 1 && j == n - 1)
    return input[i][j];

  if (i >= m || j >= n)
    return INT_MAX;

  //check if ans already exits
  if (output[i][j] != -1)
    return output[i][j];

  //Recursive Calls
  int x = minCostPath_mem(input, m, n, i, j + 1, output);
  int y = minCostPath_mem(input, m, n, i + 1, j + 1, output);
  int z = minCostPath_mem(input, m, n, i + 1, j, output);

  //small calculation
  int a = min(x, min(y, z)) + input[i][j];
  output[i][j] = a;
  return a;
}

int minCostPath_mem(int **input, int m, int n)
{
  int **output = new int *[m];
  for (int i = 0; i < m; i++)
    input[i] = new int[n];
  memset(output, -1, sizeof(output));

  return minCostPath_mem(input, m, n, 0, 0, output);
}

// dp solution
int minCostPath_dp(int **input, int m, int n)
{
  vector<vector<int>> output(n, vector<int>(m));

  //Fil last cell
  output[m - 1][n - 1] = input[m - 1][n - 1];

  for(int i = m - 1; i >= 0; i--){
    
  }
}