class Solution {
public:
    int uniquePathsDP(int i,int j,int m, int n,vector<vector<int>> &dp) {
        if(i>m-1 || j>n-1)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        else
            return dp[i][j]=uniquePathsDP(i+1,j,m,n,dp)+uniquePathsDP(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int> (n, -1));
        int ans =uniquePathsDP(0,0,m,n,dp);  
        /*
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<dp[i][j]<<" ";
            cout<<"\n";
        }
        */
        return ans;        
    }
};