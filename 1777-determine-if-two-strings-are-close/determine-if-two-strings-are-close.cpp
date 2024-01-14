class Solution {
public:
    bool closeStrings(string word1, string word2) {
    // Step 1
        if (word1.length() != word2.length()) {
            return false;
        }

        // Step 2
        vector<int> freq1(26, 0), freq2(26, 0);
        for (char c : word1) {
            freq1[c - 'a']++;
        }
        for (char c : word2) {
            freq2[c - 'a']++;
        }

        // Step 3
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        // Step 4
        if (freq1 != freq2) {
            return false;
        }

        // Step 5
        return set<char>(word1.begin(), word1.end()) == set<char>(word2.begin(), word2.end());
    }
};