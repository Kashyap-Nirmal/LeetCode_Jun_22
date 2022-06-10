class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i,j,sum;
        vector<vector<int>> ans={{1}};
        vector<int> temp;
        for(i=1;i<numRows;i++)
        {
            temp.push_back(1);
            for(j=1;j<i;j++)
            {
                //cout<<i<<" "<<j<<"\n";
                sum=ans[i-1][j-1]+ans[i-1][j];
                temp.push_back(sum);    
            }        
            //cout<<"\n";
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};