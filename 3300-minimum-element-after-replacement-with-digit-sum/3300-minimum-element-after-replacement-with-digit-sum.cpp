class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = 10001;
        for (int i = 0; i < nums.size(); i++) {
            int temp = 0;
            while (nums[i] > 0) {
                temp += nums[i] % 10;
                nums[i] = nums[i] / 10;
            }
            nums[i] = temp;                
            ans = min(ans, temp);
        }
        return ans;
    }
};