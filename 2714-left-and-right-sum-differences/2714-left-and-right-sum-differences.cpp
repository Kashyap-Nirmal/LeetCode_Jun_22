class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans (nums.size(), 0);   
        for (int i = 0; i < nums.size(); i++) {
            int left = 0, right = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (j < i) left += nums[j];
                else if (j > i) right += nums[j];
            }
            ans[i] = abs(left - right);
        }
        return ans;
    }
};