class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         sort(g.begin(), g.end());
      sort(s.begin(), s.end());
        int count = 0;

        int i = 0; // Index for children
        int j = 0; // Index for cookies

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;
                i++; // Move to the next child
            }
            j++; // Move to the next cookie
        }

        return count;
    }
};