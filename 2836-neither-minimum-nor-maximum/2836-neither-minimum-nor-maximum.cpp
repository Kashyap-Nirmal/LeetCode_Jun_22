class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() ==1 || nums.size() == 2) return -1;
        int max_ = *max_element(nums.begin(), nums.end());
        int min_ = *min_element(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) 
            if (nums[i] != min_ && nums[i] != max_) return nums[i];
        return -1;
    }
};