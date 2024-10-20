class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0, maxT, ind;
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < nums.size(); j++) {                
                if (max(maxT, nums[j]) > maxT) {
                    ind = j;                    
                    maxT = max(maxT, nums[j]);
                }
            }
            ans += nums[ind];
            nums[ind] = maxT + 1;            
        }
        return ans;
    }
};