class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            for (int t1 = 0; nums[i] != 0; t1++) {
                ans.insert(ans.end() - t1, nums[i] % 10);
                nums[i] /= 10;
            }
        }
        return ans;
    }
};