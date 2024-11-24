class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum = 0;
        for (int i = 0; i < grid[0].size(); i++) {
            int max_ = 0, maxx = 0, ind = 0;
            for (int j = 0; j < grid.size(); j++) {
                maxx = *max_element(grid[j].begin(), grid[j].end());                                
                ind = find(grid[j].begin(), grid[j].end(), maxx) - grid[j].begin();
                max_ = max(maxx, max_);            
                grid[j][ind] = 0;
            }
            sum += max_;
        }
        return sum;
    }
};