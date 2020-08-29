#include <bits/stdc++.h>
using namespace std;

int numberOfWaysToMakeChange(int n, vector<int> denoms)
{
  vector<int> num_coins(n + 1, INT_MAX);
  num_coins[0] = 0;
  int compare = 0;
  for (int denom : denoms)
  {
    for (int amount = 0; amount < n + 1; amount++)
    {
      if (denom <= amount)
      {
        if (num_coins[amount - denom] == INT_MAX)
          compare = num_coins[amount - denom];
        else
          compare = num_coins[amount - denom] + 1;

        num_coins[amount] = min(num_coins[amount], compare);
      }
    }
  }
  return num_coins[n] != INT_MAX ? num_coins[n] : -1;
}

int main()
{
  vector<int> a = {1, 5, 10};
  cout << numberOfWaysToMakeChange(7, a);
  return 0;
}
