class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,j=1,max_=0,min_=INT_MAX;
        for(i=0;i<prices.size();i++)
        {
            min_=min(min_,prices[i]);
            max_=max(max_,prices[i]-min_);
        }
        return max_;
    }
};