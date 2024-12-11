class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max_ = -1001;
        for (int i = 0; i < nums.size(); i++) {
            if (find(nums.begin(), nums.end(), -1 * nums[i]) != nums.end()) { 
                max_ = max(max_, nums[i]);
            }
        }
        if (max_ == -1001) return -1;
        return max_;
    }
};