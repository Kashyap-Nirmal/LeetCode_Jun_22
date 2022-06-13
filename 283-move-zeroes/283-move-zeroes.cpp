class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCnt=0,i;
        for(i=0;i<nums.size();i++)
            if(nums[i]==0)
            {
                zeroCnt++;
                nums.erase(nums.begin()+i);                
                i--;
                //cout<<"I";
            }
        for(i=0;i<zeroCnt;i++)
            nums.push_back(0);        
    }
};