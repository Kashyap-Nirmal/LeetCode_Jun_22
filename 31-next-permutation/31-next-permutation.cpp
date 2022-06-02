class Solution {
public:    
    void nextPermutation(vector<int>& nums) {
        int i,last_=nums.size()-1,ind1=-1,ind2=-1;
        for(i=last_-1;i>-1;i--)
        {
            if(nums[i]<nums[i+1])
            {
                //cout<<nums[i]<<" "<<nums[i+1]<<" "<<i<<"\n";
                ind1=i;        
                break;
            }                
        }
        for(i=last_;ind1!=-1 && i>-1;i--)
        {
            if(nums[ind1]<nums[i])
            {
                ind2=i;
                break;
            }                
        }        
        //cout<<ind1<<" "<<ind2<<" IND"<<"\n";
        if(ind1!=-1)
            swap(nums[ind1],nums[ind2]);
        reverse(nums.begin()+ind1+1,nums.end());        
    }
};