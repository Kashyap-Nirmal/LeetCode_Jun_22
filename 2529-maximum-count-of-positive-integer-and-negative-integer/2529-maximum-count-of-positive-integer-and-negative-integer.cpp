class Solution {
public:
    int maximumCount(vector<int>& nums) {
        for (int i = 0, pos = 0, neg = 0, max_ = 0; i < nums.size(); i++) {
            if (nums[i] < 0) neg++;
            else if (nums[i] > 0) pos++;
            max_ = max(max_, max(neg, pos));
            if (i == nums.size() - 1) return max_;
        }
        return 0;
    }
};