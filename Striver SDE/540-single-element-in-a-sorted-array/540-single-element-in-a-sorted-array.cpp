class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[(i+1)%nums.size()])
                i++;
            else
                return nums[i];
        }
        return nums[i%nums.size()];
    }
};