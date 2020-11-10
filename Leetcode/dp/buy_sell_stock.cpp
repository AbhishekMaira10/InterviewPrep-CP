#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int min_price = INT_MAX;
    int max_profit = 0;

    for (int i : prices)
    {
      if (i < min_price)
        min_price = i;

      else if (i - min_price > max_profit)
        max_profit = i - min_price;
    }
    return max_profit;
  }
};