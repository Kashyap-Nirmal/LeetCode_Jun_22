class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left (nums.size(), 0);
        vector<int> right (nums.size(), 0);
        vector<int> ans (nums.size(), 0);   
        // Left Sum
        for (int i = 1; i < nums.size(); i++) 
            for (int j = i - 1; j > -1; j--) 
                left[i] += nums[j];
        // Right Sum
        for (int i = 0; i < nums.size(); i++) 
            for (int j = i + 1; j < nums.size(); j++) 
                right[i] += nums[j];
        // Ans
        for (int i = 0; i < nums.size(); i++) ans[i] = abs(left[i] - right[i]);
        return ans;
    }
};