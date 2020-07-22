#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A)
{
  reverse(A.begin(), A.end());
  int sum = 0;
  for (int i = 0; i < A.size(); i++)
  {
    sum += A[i] * pow(10, i);
  }
  sum += 1;

  vector<int> b;
  int j = 0;
  while (sum != 0)
  {
    b[j] = sum % 10;
    sum /= 10;
    j++;
  }
  reverse(b.begin(), b.end());

  for (int i = 0; i < b.size(); i++)
    cout << b[i] << " ";

  return b;
}

int main()
{
  vector<int> A = {9, 9, 9};
  plusOne(A);
  return 0;
}
