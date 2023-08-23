class Solution
{
    public:
        int mostFrequentEven(vector<int> &nums)
        {
            int n = nums.size(), i;
            map<int, int> freq;
            for (auto x: nums)
            {
                freq[x]++;
            }
            int evefreq = 0, ans = -1;
            for (auto y: freq)
            {
                if (y.first % 2 == 0 && y.second > evefreq)
                {
                    ans = y.first;
                    evefreq = y.second;
                }
            }
            return ans;
        }
};