class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target (nums.size(), -1);
        for (int i = 0; i < nums.size(); i++) {
            if (target[index[i]] == -1) 
                target[index[i]] = nums[i];
            else {
                int temp = nums[i];
                for (int j = index[i]; j < nums.size(); j++) swap(temp, target[j]);
            }
        }
        return target;
    }
};