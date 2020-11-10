/* Question - 
 219. Contains Duplicate - II
 https://leetcode.com/problems/contains-duplicate-ii/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      unordered_map<int, int> mp;
      for(int i = 0; i < nums.size(); i++){
        if(mp.count(nums[i])){
          if(i - mp[nums[i]] <= k)
            return true;
        }
        mp[nums[i]] = i;
      }
      return false;   
    }
};