class Solution
{
    public:
        int findLengthOfShortestSubarray(vector<int> &arr)
        {
            int n = arr.size(), r = n - 1;

            while (r > 0 and arr[r - 1] <= arr[r]) --r;

            int ans = r;

            for (int i = 0; i < r and(i == 0 or arr[i - 1] <= arr[i]); ++i)
            {
                while (r < n and arr[r] < arr[i]) ++r;

                ans = min(ans, r - i - 1);	// consider the minimum length of subarray.
            }
            return ans;
        }
};