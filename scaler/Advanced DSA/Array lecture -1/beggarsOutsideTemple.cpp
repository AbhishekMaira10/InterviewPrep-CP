vector<int> Solution::solve(int A, vector<vector<int>> &B)
{
	vector<int> res(A, 0);
	for (int i = 0; i < B.size(); i++)
	{
		res[B[i][0] - 1] += B[i][2];
		if (B[i][1] < A)
			res[B[i][1]] -= B[i][2];
	}
	for (int i = 1; i < A; i++)
	{
		res[i] = res[i] + res[i - 1];
	}
	return res;
}