class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
         vector<int> store;
         
        for(int i=0;i<n;i++){
           int  result=nums[i]*nums[i];
           store.push_back(result);
        }
      

        sort(store.begin(),store.end());
        return store;
    }
};