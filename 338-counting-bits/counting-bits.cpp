class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1); // Create a result vector of size n + 1
        
        for (int i = 0; i <= n; i++) {
            res[i] = solve(i,res);
        }
        
        return res;
    }
    
    int solve(int n, vector<int>&res) {
        // Base conditions
        if (n == 0) return 0;
        if (n == 1) return 1;
         if(res[n]!=0) return res[n];
        if (n % 2 == 0) return solve(n / 2,res); // Handling even case
        else return 1 + solve(n / 2,res); // Handling odd case
    }
};
