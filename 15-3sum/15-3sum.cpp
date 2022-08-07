class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k,ts;
        vector<int> temp;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(i=0;i<nums.size()-2;i++)
        {                  
            for(j=i+1,k=nums.size()-1;j<k;)
            {
                //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<"\n";
                ts=(nums[j]+nums[k])*-1;
                if(ts==nums[i])    
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    s.insert(temp);
                    temp.clear();
                    j++;
                    k--;
                }                          
                else if(ts>nums[i])
                    j++;
                else
                    k--;
            }
        }
        set<vector<int>>::iterator it;
        for(it=s.begin();it!=s.end();it++)
            ans.push_back(*it);
        return ans;
    }
};