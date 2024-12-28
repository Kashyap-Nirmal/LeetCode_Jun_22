class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> ans;
        for (int i = 0; i < nums.size(); i++) 
            for (int j = nums[i][0]; j <= nums[i][1]; j++) 
                ans.insert(j);
        return ans.size();
    }
};