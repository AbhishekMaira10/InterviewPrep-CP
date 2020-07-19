#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int climbStairs(int n)
  {
    int *arr = new int[n + 1];
    for (int i = 0; i <= n; i++)
      arr[i] = -1;
    return climb_stairs(0, n, arr);
  }

  int climb_stairs(int i, int n, int *arr)
  {
    if (arr[i] != -1)
      return arr[i];

    
  }
};