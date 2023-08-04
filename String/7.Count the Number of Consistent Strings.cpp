Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.

  Code;
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for(int i =0 ; i<allowed.size();i++)
        
            st.insert(allowed[i]);
            int ans=words.size();
            for(auto word: words)
            {
             for( auto i: word)
             {
               
             if(st.find(i)==st.end()){
                 ans--;
                 break;
             }

             }
            }
            return ans;
        
    }
};
