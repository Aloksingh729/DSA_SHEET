Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Code:
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size() , cnt =0 ,flag=0;
       for(int i=n-1;i>=0;i--){
           if(s[i]==' '&&flag)break;
           if(s[i]!=' '){
               flag=1;
               cnt++;
           }
       }
       return cnt;
    }
};
