/* Question -
 1. Remove Duplicates from Sorted Array
 https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int removeDuplicates(vector<int> &nums)
	{
		int distinct = nums[0];
		int track = 0;

		for (int i = 1; i < nums.size(); i++)
		{
			if (distinct != nums[i])
			{
				track++;
				nums[track] = nums[i];
				distinct = nums[i];
			}
		}
		return track + 1;
	}
};