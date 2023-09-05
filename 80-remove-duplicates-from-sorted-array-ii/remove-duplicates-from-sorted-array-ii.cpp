class Solution {
public:
    
        int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n <= 2) {
        return n;
    }

    int slow = 1;
    int count = 1;

    for (int fast = 1; fast < n; ++fast) {
        if (nums[fast] == nums[fast - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count <= 2) {
            nums[slow] = nums[fast];
            slow++;
        }
    }

    return slow;
}

    
};