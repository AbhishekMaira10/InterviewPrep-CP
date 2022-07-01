/* Question -
 41. First Missing Positive
  https://leetcode.com/problems/first-missing-positive/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
	int firstMissingPositive(vector<int> &nums)
	{
		int n = nums.size();
		sort(nums.begin(), nums.end());
		int firstPositive = 1;

		for (int i = 0; i < n; i++)
		{
			if (nums[i] == firstPositive)
				firstPositive += 1;
			else if (nums[i] > firstPositive)
				return firstPositive;
		}
		return firstPositive;
	}
};

class Solution2
{
public:
	int firstMissingPositive(vector<int> &nums)
	{
	}
};