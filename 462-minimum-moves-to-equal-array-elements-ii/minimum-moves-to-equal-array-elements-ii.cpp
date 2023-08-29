class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int moves = 0;
        int median;
        
        sort(nums.begin(), nums.end()); // Sort the array
        
        int mid = nums[nums.size() / 2]; // Find the median (middle element)
        
        // Calculate moves for each element and sum them up
        for (int num : nums) {
            moves += abs(num - mid); // Calculate the absolute difference from the median
        }

        return moves;
    }
};