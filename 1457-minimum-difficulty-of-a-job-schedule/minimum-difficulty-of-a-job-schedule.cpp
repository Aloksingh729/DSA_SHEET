class Solution {
public:
    int t[301][11];
   int solve(vector<int>& jobDifficulty, int n,int i,int d){
       if(d==1){
 int maxd=INT_MIN;
       for(int j=i;j<n;j++){
           maxd=max(maxd,jobDifficulty[j]);
       }
       return maxd;

       }
       if(t[i][d]!=-1)
       return t[i][d];
      int maxd=jobDifficulty[i];
      int result=INT_MAX;
      for(int j=i;j<=n-d;j++){
          maxd=max(maxd,jobDifficulty[j]);
          int resulti=maxd+solve(jobDifficulty,n,j+1,d-1);
          result=min(result,resulti);
      }
      return t[i][d]=result;
   }

    int minDifficulty(vector<int>& jobDifficulty, int d) {
      int n=jobDifficulty.size();
      if(n<d)
      return -1;
      memset(t,-1,sizeof(t));
      return solve(jobDifficulty,n,0,d);
    }
};