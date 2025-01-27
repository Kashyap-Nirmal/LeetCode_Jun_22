class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int ans = 101;
        for (int i = 0; i < nums.size(); i++)
            if (i % 10 == nums[i]) ans = min(ans, i);
        if (ans == 101) ans = -1;
        return ans;
    }
};