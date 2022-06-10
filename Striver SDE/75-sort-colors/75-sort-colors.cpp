class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,cnt1=0,cnt2=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                cnt1++;
            else if(nums[i]==2)
                cnt2++;
            nums[i]=0;
        }
        for(i=nums.size()-cnt1-cnt2;i<nums.size();i++)
        {
            if(i<nums.size()-cnt2)
                nums[i]=1;
            else
                nums[i]=2;
        }
    }
};