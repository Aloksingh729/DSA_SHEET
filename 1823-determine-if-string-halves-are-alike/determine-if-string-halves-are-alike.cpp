class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
       int i=0;
       int j =n/2;
       int countL=0;
       int countR=0;

       string vowels="aeiouAEIOU";
       unordered_set<char> st(begin(vowels),end(vowels));

       while(i<n/2&&j<n){
               if(st.find(s[i]) != st.end()) countL++;
            
            if(st.find(s[j]) != st.end()) countR++;
            
            i++;
            j++;
       }
       return countL==countR;
    }
};