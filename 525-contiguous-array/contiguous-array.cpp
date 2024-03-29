class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int ,int > mp;
        int currSum=0;
        int maxl=0;
        mp[0]=-1;

        for(int i=0;i<n;i++){
            currSum+=(nums[i]==1)?1:-1;

            if(mp.find(currSum)!=mp.end()){
                maxl=max(maxl,i-mp[currSum]);
            }else
            mp[currSum]=i;
        }
        return maxl;
    }
};