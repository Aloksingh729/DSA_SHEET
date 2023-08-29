class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNum = INT_MAX;
        int sum = 0;

        // Find the minimum element and calculate the sum
        for (int num : nums) {
            sum += num;
            minNum = min(minNum, num);
        }

        // Minimum number of moves is the difference between the sum and the minimum element multiplied by the number of elements
        return sum - minNum * nums.size();
    }
};
