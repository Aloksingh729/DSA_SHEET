class Solution {
public:
    int hIndex(vector<int>& citations) {
        int cnt = 0;
        int n = citations.size();
        sort(citations.begin(), citations.end());
        for (int i = n - 1; i >= 0; i--) { // Start from n - 1
            if (citations[i] >= n - i) { // Compare with n - i
                cnt++;
            } else {
                break; // If citations[i] < n - i, no need to continue checking
            }
        }
        return cnt;
    }
};
