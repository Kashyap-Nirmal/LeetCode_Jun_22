class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, flag = true; // Increasing
        if (nums[0] > nums[1]) inc = false; // Decreasing
        if (nums[0] == nums[1]) flag = false; // Equal initial elements
        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) continue;
            else if (!flag && nums[i] != nums[i + 1]) {
                // Found 1st difference after all equal values
                if (nums[i] > nums[i + 1]) inc = false;
                flag = true;
                continue;
            } else if (inc && nums[i] < nums[i + 1]) continue;
            else if (!inc && nums[i] > nums[i + 1]) continue;
            else return false;
        }
        return true;
    }
};