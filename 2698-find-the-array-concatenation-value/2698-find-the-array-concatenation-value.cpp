class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int tem = nums.size();
        for (int i = 0; i < tem / 2; i++) {
            int temp = nums[nums.size() - 1];
            string s = to_string(nums[0]);
            ans += stoi(s + to_string(temp));
            nums.erase(nums.begin());
            nums.erase(nums.end());
        }
        if (nums.size() % 2 == 1) ans += nums[0];
        return ans;
    }
};