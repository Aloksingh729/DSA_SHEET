class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
      ///  unordered_map<int,int> mp2;
       for(auto &x:arr){
           mp[x]++;
       }
       unordered_set<int> unique;
    for (auto& entry : mp) {
        if (!unique.insert(entry.second).second) {
            // If inserting fails, it means the count is not unique
            return false;
        }
    }
     return true;
    }
   
};