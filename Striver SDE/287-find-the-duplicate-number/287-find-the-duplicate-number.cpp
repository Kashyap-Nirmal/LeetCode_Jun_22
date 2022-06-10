class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int freq[100001]={0},i;
        for(i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]==2)
                return nums[i];            
        }
        return 0;
    }
};