class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lostMap;
           int n=matches.size();

           for(int i=0;i<n;i++){
               int loser=matches[i][1];
               lostMap[loser]++;
           }

           vector<int>notLost;
           vector<int>lostOnce;

           for(int i=0;i<n;i++){
               int winner=matches[i][0];
               int loser=matches[i][1];

               if(lostMap.find(winner)==lostMap.end()){
                   notLost.push_back(winner);
                   lostMap[winner]=2;
               }
               if(lostMap[loser]==1){
                   lostOnce.push_back(loser);
               }
           }
            sort(notLost.begin(),notLost.end());    
        sort(lostOnce.begin(),lostOnce.end());

        return {notLost,lostOnce};
    }
};