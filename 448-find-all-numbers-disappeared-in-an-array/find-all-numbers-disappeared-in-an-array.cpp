class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        unordered_set<int> numSet;
        
        // Add all numbers from the array to the hash set
        for (int num : nums) {
            numSet.insert(num);
        }
        
        // Check for missing numbers in the range [1, n]
        for (int i = 1; i <= nums.size(); i++) {
            if (numSet.find(i) == numSet.end()) {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
