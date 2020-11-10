#include <bits/stdc++.h>
using namespace std;

//method -1: rotate one by one
// time complexity- O(n*d)
// space complexity - 0(1)
void leftRotateByOne(int arr[], int n)
{
  int temp = arr[0], i;
  for (i = 0; i < n - 1; i++)
    arr[i] = arr[i + 1];

  arr[i] = temp;
}

void leftRotate(int arr[], int n, int d)
{
  for (int i = 0; i < d; i++)
    leftRotateByOne(arr, n);
}