/* Question - 
 217. Contains Duplicate
 https://leetcode.com/problems/contains-duplicate/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

      /*
      Alternate solution - 
      unordered_set<int> s{nums.begin(), nums.end()};
      return nums.size() != s.size();
      */
    
    sort(nums.begin(), nums.end());  
    for(int i = 0; i < nums.size() - 1; i++){
      if(nums[i] == nums[i + 1])
        return true;
    }
    return false;
    }
};