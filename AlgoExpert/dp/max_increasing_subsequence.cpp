#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> buildSequence(vector<int> array, vector<int> sequences, int currentIndex, int sum)
{
  vector<vector<int>> sequence = {{}, {}};
  sequence[0].push_back(sum);
  while (currentIndex != INT_MIN)
  {
    sequence[1].insert(sequence[1].begin(), array[currentIndex]);
    currentIndex = sequences[currentIndex];
  }
  return sequence;
}

vector<vector<int>> maxSumIncreasingSubsequence(vector<int> array)
{
  vector<vector<int>> sequence;
  vector<int> sums = array;
  int maxSumIndex = 0;
  vector<int> sequences(array.size(), INT_MIN);

  for (int i = 0; i < array.size(); i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (array[i] > array[j] && sums[j] + array[i] >= sums[i])
      {
        sums[i] = array[i] + sums[j];
        sequences[i] = j;
      }
    }
    if (sums[i] >= sums[maxSumIndex])
      maxSumIndex = i;
  }

  return buildSequence(array, sequences, maxSumIndex, sums[maxSumIndex]);
}