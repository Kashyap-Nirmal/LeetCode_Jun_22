class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posArr, negArr, ans = nums;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) posArr.push_back(nums[i]);
            else negArr.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i+= 2) {
            ans[i] = posArr[i/2];
            ans[i+1] = negArr[i/2];
        }
        return ans;
    }
};