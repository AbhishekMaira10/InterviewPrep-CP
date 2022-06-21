/* Question -
https://leetcode.com/problems/merge-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
	void rotate(vector<int> &nums, int k)
	{
		int n = nums.size();
		vector<int> output(n);

		for (int i = 0; i < n; i++)
		{
			int index = (i + k) % n;
			output[index] = nums[i];
		}
		nums = output;
	}
};

class Solution2
{
public:
	void rotate(vector<int> &nums, int k)
	{
		k %= nums.size();
		reverse(nums.begin(), nums.end());
		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
	}
};