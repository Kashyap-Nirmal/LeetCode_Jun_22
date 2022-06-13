class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j,left=0,right=numbers.size(),mid=left+(right-left)/2;
        vector<int> ans;
        for(i=0;i<numbers.size();i++,left=0,right=numbers.size())
        {       
            for(j=0;j<log2(numbers.size());j++)
            {                
                mid=left+(right-left)/2;
                //cout<<i<<" "<<numbers[i]<<" "<<j<<" "<<target-numbers[i]<<" "<<mid<<" "<<numbers[mid]<<" "<<left<<" "<<right<<"\n";
                if(numbers[mid]==target-numbers[i] && mid!=i)
                {                    
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    sort(ans.begin(),ans.end());
                    return ans;
                } 
                else if(numbers[mid]<target-numbers[i])
                    left=mid;
                else if(numbers[mid]>target-numbers[i])
                    right=mid;                
            }                            
        }        
        return ans;
    }
};