class Solution
{
    public:
        int solve(vector<int> &nums)
        {
            int n = nums.size();

            int prev = nums[0];
            int prev2 = 0;

            for (int i = 1; i < n; i++)
            {
                int pick = nums[i];
                if (i > 1)
                    pick = pick + prev2;
                int nonPick = 0 + prev;

                int cur_i = max(pick, nonPick);
                prev2 = prev;
                prev = cur_i;
            }

            return prev;	// Move this line outside of the loop
        }

    int rob(vector<int> &nums)
    {
        vector<int> pick1;
        vector<int> pick2;
        if (nums.size() == 1)
            return nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0) pick1.push_back(nums[i]);
            if (i != nums.size() - 1) pick2.push_back(nums[i]);
        }
        int ans1 = solve(pick1);
        int ans2 = solve(pick2);

        return max(ans1, ans2);
    }
};