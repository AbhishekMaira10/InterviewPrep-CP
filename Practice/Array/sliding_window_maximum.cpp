#include <bits/stdc++.h>
using namespace std;

// Question - https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

// brute force
// Time Complexity - O(N*K)
// Space Complexity - O(1)
void printKMax_brute(int arr[], int n, int k)
{
  for (int i = 0; i <= n - k; i++)
  {
    int max = arr[i];
    for (int j = 1; j < k; j++)
    {
      if (arr[i + j] > max)
        max = arr[i + j];
    }
    cout << max << " ";
  }
}

// Approach 2 using dequeue
// Time Complexity - O(n)
// Space complexity - O(k)
void printKMax_2(int arr[], int n, int k)
{
  deque<int> Qi(k);
  int i;

  for (i = 0; i < k; i++)
  {
    while ((!Qi.empty()) && arr[i] > arr[Qi.back()])
      Qi.pop_back();

    Qi.push_back(i);
  }

  for (; i < n; i++)
  {
    cout << arr[Qi.front()] << " ";

    while ((!Qi.empty()) && Qi.front() <= i - k)
      Qi.pop_front();

    while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
      Qi.pop_back();

    // Add current element at the rear of Qi
    Qi.push_back(i);
  }
  cout << arr[Qi.front()];
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;
  printKMax_brute(arr, n, k);
  return 0;
}