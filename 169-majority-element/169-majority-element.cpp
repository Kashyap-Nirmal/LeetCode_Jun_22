class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,ans,cnt=0;
        for(i=0;i<nums.size();i++)
        {
            if(cnt==0)
                ans=nums[i];
            if(ans==nums[i])
                cnt++;
            else
                cnt--;
        }
        return ans;        
    }
};