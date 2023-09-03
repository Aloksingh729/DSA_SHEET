class Solution 
{
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        long long count = 0;
        long long ans = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0) //count number of subarray for continuous 0s.
            {
                count++;
                ans += count;
            }
            else //If current element is not zero then count will be 0.
            {
                count = 0;
            }
        }
        return ans;
    }
    
};