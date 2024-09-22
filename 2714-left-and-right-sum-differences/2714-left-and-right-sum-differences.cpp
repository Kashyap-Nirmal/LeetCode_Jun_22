class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left (nums.size(), 0);
        vector<int> right (nums.size(), 0);
        vector<int> ans (nums.size(), 0);   
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (j < i) left[i] += nums[j];
                else if (j > i) right[i] += nums[j];
            }
            ans[i] = abs(left[i] - right[i]);
        }
        return ans;
    }
};