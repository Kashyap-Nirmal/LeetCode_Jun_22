class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        vector<int> temp = heights;
        sort(heights.begin(), heights.end());
        for (int i = 0; i < heights.size(); i++) 
            if (temp[i] != heights[i]) ans++;
        return ans;
    }
};