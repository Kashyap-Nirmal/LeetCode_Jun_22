class Solution {
    public int minimumOperations(int[][] grid) {
        int ans = 0;
        for (int i = 0; i < grid[0].length; i++) {
            for (int j = 1; j < grid.length; j++) {
                if (grid[j][i] <= grid[j -1][i]) {
                    ans += grid[j - 1][i] - grid[j][i] + 1;
                    grid[j][i] = grid[j - 1][i] + 1;
                }
            }            
        }
        return ans;
    }
}