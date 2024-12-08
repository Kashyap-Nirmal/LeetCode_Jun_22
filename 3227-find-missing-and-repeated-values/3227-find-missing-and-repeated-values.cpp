class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2, 0);
        map<int, int> m;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid.size(); j++) {
                if(ans[0] != 0 && m.find(grid[i][j]) == m.end()) m.insert({grid[i][j], 0});
                else ans[0] = grid[i][j];
                ans[1] += grid[i][j];
            }
        }
        ans[1] = (grid.size() * grid.size()) * ((grid.size() * grid.size()) 
        + 1) / 2 - ans[1] + ans[0];
        return ans;
    }
};