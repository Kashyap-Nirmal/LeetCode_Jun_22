class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0, dSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            eSum += nums[i];
            dSum += digitSum(nums[i]);
        }
        return abs(eSum - dSum);
    }
    int digitSum (int num) {
        int sum = 0;
        for (; num > 0; sum += num % 10, num /= 10);
        return sum;
    }
};