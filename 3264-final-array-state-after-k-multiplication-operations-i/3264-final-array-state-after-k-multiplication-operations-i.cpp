class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int minInd = 0, minT;
        for (int i = 0; i < k; i++) {
            minT = INT_MAX;
            for (int j = nums.size() - 1; j > -1; j--) {
                if (nums[j] == min(minT, nums[j])) {
                    minInd = j;
                    minT = min(minT, nums[j]);
                }
            }
            nums[minInd] *= multiplier;
        }
        return nums;
    }
};