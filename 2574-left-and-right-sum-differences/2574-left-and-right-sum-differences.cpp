class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left (nums.size(), 0);
        vector<int> right (nums.size(), 0);
        vector<int> ans (nums.size(), 0);   
        for (int i = 0, j = nums.size() - 2; i < nums.size(); i++, j--) {
            if (i > 0)
                left[i] = nums[i-1] + left[i-1]; 
            if (j > -1)
                right[j] = nums[j+1] +  right[j+1];
        }
        // Ans
        for (int i = 0; i < nums.size(); i++) ans[i] = abs(left[i] - right[i]);
        return ans;
    }
};