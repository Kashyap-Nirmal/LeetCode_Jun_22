class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp, min_ = 100000;
        for(int i=0; nums[i] < min_ , i < nums.size(); i++) {
            min_ = min(min_, abs(nums[i]));
            if (min_ == abs(nums[i])) temp = nums[i];
        }            
        return temp;
    }
};