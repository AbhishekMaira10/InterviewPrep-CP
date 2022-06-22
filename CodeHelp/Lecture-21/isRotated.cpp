/* Question -
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution1
{

	void print(vector<int> &nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			cout << nums[i] << " ";
		}
		cout << endl;
	}

public:
	bool check(vector<int> &nums)
	{
		vector<int> sortnum(nums.size());
		vector<int> temp(nums.size());
		sortnum = nums;
		sort(sortnum.begin(), sortnum.end());

		for (int k = 0; k < nums.size(); k++)
		{
			for (int i = 0; i < nums.size(); i++)
			{
				temp[(i + k) % nums.size()] = nums[i];
			}

			if (temp == sortnum)
			{
				return true;
			}
		}
		return false;
	}
};

class Solution
{
public:
	bool check(vector<int> &nums)
	{
		int count = 0;
		int n = nums.size();
		for (int i = 1; i < n; i++)
		{
			if (nums[i - 1] > nums[i])
				count++;
		}
		if (nums[n - 1] > nums[0])
			count++;
		return count <= 1;
	}
};