class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sums (accounts.size(), 0);
        int ans = 0;
        for (int i = 0; i < accounts.size(); i++) 
            for (int j = 0; j < accounts[0].size(); j++) 
                sums[i] += accounts[i][j];
        for (int i = 0; i < accounts.size(); i++) 
            ans = std::max(sums[i], ans);
        return ans;
    }
};