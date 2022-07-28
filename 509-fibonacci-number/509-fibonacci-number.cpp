class Solution {
public:
    int fib1(int n,vector<int> &dp)
    {
        if(n<=1)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=fib1(n-1,dp)+fib1(n-2,dp);         
    }
    int fib(int n) {        
        vector<int> dp(n+1,-1);
        return fib1(n,dp);
    }
};