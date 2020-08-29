#include <bits/stdc++.h>
using namespace std;

// time complexity - O(n)
//space complexity - o(n)
int maxSubsetSumNoAdjacent(vector<int> array)
{
  if (array.size() == 0)
    return 0;

  if (array.size() == 1)
    return array[0];

  vector<int> maxSums = array;
  maxSums[1] = max(array[0], array[1]);

  for (int i = 2; i < array.size(); i++)
    maxSums[i] = max(maxSums[i - 1], array[i] + maxSums[i - 2]);

  return maxSums[array.size() - 1];
}

// time complexity - O(n)
//space complexity - o(1)
int maxSubsetSumNoAdjacent_2(vector<int> array)
{
  if (array.size() == 0)
    return 0;

  if (array.size() == 1)
    return array[0];

  int first = max(array[0], array[1]);
  int second = array[0];

  for (int i = 2; i < array.size(); i++)
  {
    int current = max(first, array[i] + second);
    second = first;
    first = current;
  }
  return first;
}

int main()
{
  vector<int> array{75, 105, 120, 75, 90, 135};
  cout << maxSubsetSumNoAdjacent(array);
}