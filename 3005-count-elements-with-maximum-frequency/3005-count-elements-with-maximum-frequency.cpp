class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> arr(100,0);
        int sum = 0, max_;
        for (int i = 0; i < nums.size(); i++) arr[nums[i] - 1]++;
        max_ = *max_element(arr.begin(), arr.end());
        for (int i = 0; i < 100; i++) if (arr[i] == max_) sum++;
        return sum * max_;
    }
};