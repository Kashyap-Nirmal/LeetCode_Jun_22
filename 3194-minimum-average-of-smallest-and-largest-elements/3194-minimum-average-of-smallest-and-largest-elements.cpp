class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans = INT_MAX;
        int size_ = nums.size() / 2;
        for (int i = 0; i < size_ ; i++) {
            // Find max and min elements
            int min_ = *min_element(nums.begin(), nums.end());
            int max_ = *max_element(nums.begin(), nums.end());

            // Find and remove minimum element
            vector<int>::iterator iter = find(nums.begin(), nums.end(), min_);
            nums.erase(iter, iter + 1);

            // Find and remove maximum element
            iter = find(nums.begin(), nums.end(), max_);
            nums.erase(iter, iter + 1);

            // Calculate ans
            ans = min(ans, (min_ + max_) / 2.0);
        }
        return ans;
    }
};