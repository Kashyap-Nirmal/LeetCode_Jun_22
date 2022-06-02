class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,sum=0,max_=nums[0];    
        for(i=0;i<nums.size() && nums.size()>1;i++)
        {
            if(sum<0)
                sum=0;
            sum+=nums[i];
            max_=max(sum,max_);
        }
        return max_;
    }
};