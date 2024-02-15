class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();


        sort(nums.begin(),nums.end());

        long long psum=0;
        long long csum=0;

        for(int i=0;i<n;i++){
            if(nums[i]<csum){
                psum=nums[i]+csum;
            }
            csum+=nums[i];
        }
        return psum==0 ?-1:psum;
    }
};