#include <bits/stdc++.h>
using namespace std;

/* Question - 

Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

Examples:

For any array, rightmost element always has next greater element as -1.
For an array which is sorted in decreasing order, all elements have next greater element as -1.
For the input array [4, 5, 2, 25}, the next greater elements for each element are as follows.

*/

void printNGE(int arr[], int n)
{
  stack<int> s;
  s.push(arr[0]);

  for (int i = 1; i < n; i++)
  {
    if (s.empty())
    {
      s.push(arr[i]);
      continue;
    }

    while (s.empty() == false and s.top() < arr[i])
    {
      cout << s.top() << " --> " << arr[i] << endl;
      s.pop();
    }

    s.push(arr[i]);
  }

  while (s.empty() == false)
  {
    cout << s.top() << " --> " << -1 << endl;
    s.pop();
  }
}

int main()
{
  int arr[] = {11, 13, 21, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  printNGE(arr, n);
  return 0;
}