class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // Pointer for string s

        for (char c : t) {
            if (i < s.length() && s[i] == c) {
                i++; // Move the pointer in s
            }
        }

        return i == s.length(); // If i reaches the end of s, s is a subsequence of t.
    }
};
