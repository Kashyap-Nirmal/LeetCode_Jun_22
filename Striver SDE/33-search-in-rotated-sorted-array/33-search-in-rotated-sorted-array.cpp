class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,j,pivot;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
                continue;
            else
                break;
        }
        pivot=(i+1)%nums.size();
        //cout<<i<<"\n";
        for(j=0;j<=i;j++)
        {
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
        for(i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        
        int left=0,right=nums.size(),mid=left+(right-left)/2;
        if(target<nums[0] || target>nums[right-1])
            return -1;
        for(i=0;i<log2(nums.size());i++)
        {
            if(target==nums[mid])
                return (mid+pivot)%nums.size();
            else if(target<nums[mid])
                right=mid;
            else if(target>nums[mid])
                left=mid;
            mid=left+(right-left)/2;
        }
        if(target==nums[0])
            return (pivot)%nums.size();
        else if(target==nums[right-1])
            return (right+pivot)%nums.size();        
        return -1;
    }
};