#include <bits/stdc++.h>
using namespace std;

//Using dynamic programming (bottom up approach)
//time complexity - O(n)
//space Complexity - O(n)
int fibo_3(int n)
{
  int *ans = new int[n + 1];

  ans[0] = 0;
  ans[1] = 1;

  for (int i = 2; i <= n; i++)
    ans[i] = ans[i - 1] + ans[i - 2];

  return ans[n];
}

//Using recursion (brute force)
// time complexity - O(2^n)
//space complexity - O(n)
int fibo(int n)
{
  if (n <= 1)
    return n;

  int a = fibo(n - 1);
  int b = fibo(n - 2);
  return a + b;
}

//Using Memoization (top down approach)
// time complexity - O(n)
//space complexity - o(n)
int fibo_helper(int n, int *ans)
{
  if (n <= 1)
    return n;

  //Check if output already exits
  if (ans[n] != -1)
    return ans[n];

  int a = fibo_helper(n - 1, ans);
  int b = fibo_helper(n - 2, ans);

  //saving the output for future use
  ans[n] = a + b;

  //return final output
  return ans[n];
}

int fibo_2(int n)
{
  int *ans = new int[n + 1];

  for (int i = 0; i <= n; i++)
    ans[i] = -1;

  return fibo_helper(n, ans);
}

int main()
{
  int n;
  cin >> n;
  cout << fibo_2(n) << endl;
}