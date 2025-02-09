class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for (int i = 0; i < nums.size(); i++) {
            auto it = find(nums.begin(), nums.end(), original);
            if (it != nums.end()) {
                *it = -1;
                original *= 2;
            } else {
                return original;
            }
        }
        return original;
    } 
};