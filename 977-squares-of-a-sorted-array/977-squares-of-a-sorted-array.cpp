class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
            nums[i]*=nums[i];
        sort(nums.begin(),nums.end());
        return nums;
        /*
        130622-Tried code
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
                break;
            else if(nums[i]<0)
                nums[i]*=-1;
        }
        reverse(nums.begin(),nums.begin()+i%nums.size());
        reverse(nums.begin(),nums.end());
        j=nums.size()-1;
        for(i=1;i<j && i<nums.size() && j>-1;)
        {            
            //cout<<i<<" "<<nums[i]<<" "<<j<<" "<<nums[j]<<"\n";
            if(nums[i]<nums[j])   
            {
                //cout<<i<<" "<<j<<" I\n";
                swap(nums[i],nums[j]);
                i++;
            }
            else
                j--;                
        }
        //cout<<i<<" "<<j<<"\n";
        if(nums[j+1%nums.size()]>nums[i%nums.size()])
            swap(nums[i%nums.size()],nums[j+1%nums.size()]);
        for(i=0;i<nums.size();i++)
            nums[i]*=nums[i];
        reverse(nums.begin(),nums.end());
        return nums;
        */
    }
};