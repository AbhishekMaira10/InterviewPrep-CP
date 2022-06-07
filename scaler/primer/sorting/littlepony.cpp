#include <bits/stdc++.h>
using namespace std;

vector<int> Solution::solve(vector<int> &A, vector<int> &B)
{
	for (int i = 1; i < A.size(); i++)
		A[i] += A[i - 1];
	for (int i = 0; i < B.size(); i++)
		B[i] = upper_bound(A.begin(), A.end(), B[i]) - A.begin();
	return B;
}