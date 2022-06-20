/* Question -
https://leetcode.com/problems/move-zeroes/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	void moveZeroes(vector<int> &nums)
	{
		int lstZero = 0;
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] != 0)
				swap(nums[i], nums[lstZero++]);
	}
};