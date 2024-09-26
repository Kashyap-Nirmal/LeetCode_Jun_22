class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        vector<int> temp (nums.size(), 0);
        int sum = 0, expSum = nums.size() * (nums.size() + 1) / 2;
        // Use the sum of 1 to n as n*(n+1)/2 to find the missing number after finding the repeated number.
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            temp[nums[i] - 1]++;
            if (temp[nums[i] - 1] == 2)
                ans.push_back(nums[i]);
        } 
        ans.push_back(ans[0] + expSum - sum);
        return ans;
    }
};