class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mp2;
       for(auto &x:arr){
           mp[x]++;
       }
       for(auto& y:mp){
           mp2[y.second]++;
       }
       for(auto& y:mp2){
           if(y.second>1){
               return false;
           }
       }
       return true;
    }
};