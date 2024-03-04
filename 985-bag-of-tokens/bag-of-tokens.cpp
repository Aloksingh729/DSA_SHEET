class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n= tokens.size();
        int currscore=0;
        int maxscore=0;
     sort(tokens.begin(), tokens.end());

     int l=0, r=n-1;

     while(l<=r){
         if(power>=tokens[l]){
             currscore++;
             maxscore=max(maxscore,currscore);
             power-=tokens[l];
             l++;
         }
         else if(currscore>=1){
             currscore--;
             power+=tokens[r];
             r--;
         }
         else{
             return maxscore;
         }
     }
        
        
        return maxscore;;
    }
};