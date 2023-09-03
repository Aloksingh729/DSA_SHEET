class Solution
{
    public:
        int numberOfArithmeticSlices(vector<int> &nums)
        {
            if (nums.size() < 3)
                return 0;

            int cnt = 0, diff = 0, cnt2 = 0;
            int prev_diff = nums[1] - nums[0];

            for (int i = 1; i < nums.size() - 1; i++)
            {
               	// curr difference
                int curr_diff = nums[i + 1] - nums[i];

               
                if (curr_diff == prev_diff)
                    ++cnt2;

                else
                {
                    prev_diff = curr_diff;
                    cnt2 = 0;	// make ind to 0
                }

               	
                cnt += cnt2;
            }

            return cnt;
        }
};