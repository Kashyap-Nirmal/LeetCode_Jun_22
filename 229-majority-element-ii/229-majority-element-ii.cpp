class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int i,ans1=INT_MIN,ans2=INT_MIN,cnt1=0,cnt2=0;
        vector<int> ans;
        for(i=0;i<nums.size();i++)
        {
            if(cnt1==0 && ans2!=nums[i])
                ans1=nums[i];
            else if(cnt2==0 && ans1!=nums[i])
                ans2=nums[i];
            if(ans1==nums[i])
                cnt1++;
            else if(ans2==nums[i])
                cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }    
            //cout<<ans1<<" "<<ans2<<" "<<cnt1<<" "<<cnt2<<"\n";
        }
        cnt1=0;
        cnt2=0;
        //cout<<"\n"<<ans1<<" "<<ans2<<" "<<cnt1<<" "<<cnt2<<"\n";
        if(ans1==ans2)            
            ans2=INT_MIN;
        for(i=0;i<nums.size();i++)
            if(nums[i]==ans1)
                cnt1++;
        for(i=0;i<nums.size();i++)
            if(nums[i]==ans2)
                cnt2++;        
        if(cnt1>floor(nums.size()/3))
            ans.push_back(ans1);
        if(cnt2>floor(nums.size()/3))
            ans.push_back(ans2);
        return ans;
    }
};