class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
         n=arr.size();
        memset(t,-1,sizeof(t));
        return solve(arr,0,k);
    }

      int n;
int t[501];
    int solve(vector<int> &arr, int idx , int k){
         if(idx>=n){
             return 0;
         }
         if(t[idx]!=-1){
             return t[idx];
         }
         int result=0;
         int currmax=-1;

         for(int i=idx;i<n&& i-idx+1<=k ;i++ ){
             currmax=max(currmax,arr[i]);

             result=max(result,currmax*(i-idx+1)+solve(arr,i+1,k));
         }
         return t[idx]=result;
    }
};