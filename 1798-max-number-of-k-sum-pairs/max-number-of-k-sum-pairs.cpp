class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int s = 0;
        int e = nums.size() - 1; // Corrected: subtract 1 to access the last element
        int cnt = 0;
        sort(nums.begin(), nums.end());
        while (s < e)
        {
            if (nums[s] + nums[e] == k)
            {
                cnt++;
                s++; // Corrected: Move both pointers
                e--;
            }
            else if (nums[s] + nums[e] > k)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        return cnt;
    }
};