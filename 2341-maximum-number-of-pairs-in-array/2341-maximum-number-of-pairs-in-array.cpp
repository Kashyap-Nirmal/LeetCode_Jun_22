class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans(2, 0);
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                ans[0]++;
                i++;
            } else ans[1]++;
        }
        if (ans[0] * 2 + ans[1] != nums.size()) ans[1] = nums.size() - ans[0] * 2;
        return ans;
    }
};