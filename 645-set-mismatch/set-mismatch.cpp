class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int duplicate = -1, missing = -1;
       vector<int> result;

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
              duplicate=nums[i];
              break;
            }
        }

        for(int i=1;i<=n;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                missing=i;
                break;
            }
        }
 result.push_back(duplicate);
        result.push_back(missing);
       
       return result;
    }



};