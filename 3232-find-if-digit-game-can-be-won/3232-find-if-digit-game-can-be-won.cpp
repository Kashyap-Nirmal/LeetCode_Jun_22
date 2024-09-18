class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sngl = 0, dbl = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 10) sngl+= nums[i];
            else dbl += nums[i];
        }
        return sngl != dbl;
    }
};