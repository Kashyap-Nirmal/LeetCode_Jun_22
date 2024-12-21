class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        for (int iter = 0; iter < k; iter++) {
            int max_ = *max_element(gifts.begin(), gifts.end());
            auto it = find(gifts.begin(), gifts.end(), max_);
            gifts[it - gifts.begin()] = floor(sqrt(gifts[it - gifts.begin()]));
        }        
        for (int iter = 0; iter < gifts.size(); iter++) ans += gifts[iter];
        return ans;
    }
};