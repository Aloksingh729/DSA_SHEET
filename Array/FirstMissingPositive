Given an unsorted integer array nums, return the smallest missing positive integer.

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

Code:
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int ans = 1;
        sort(nums.begin(), nums.end());
        for(auto i: nums) if(i == ans) ans++;
        return ans;
    }
};
