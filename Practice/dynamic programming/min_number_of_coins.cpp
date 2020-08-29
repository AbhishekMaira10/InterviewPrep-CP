#include <bits/stdc++.h>
using namespace std;

// question - https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/

//recursive solution
// exponential complexity
int minCoins_recurrsive(int coins[], int m, int V)
{
  if (V == 0)
    return 0;

  int res = INT_MAX;

  for (int i = 0; i < m; i++)
  {
    if (coins[i] <= V)
    {
      int sub_res = minCoins_recurrsive(coins, m, V - coins[i]);

      if (sub_res != INT_MAX && sub_res + 1 < res)
        res = sub_res + 1;
    }
  }
}
