class Solution {
public:
    bool cmp(pair<string, int>& a, pair<string, int>& b) { 
        return a.second < b.second; 
    } 
    int countBalls(int lowLimit, int highLimit) {
        int max_ = -1;
        map <int, int> ans;
        for (int i = lowLimit; i <= highLimit; i++) {
            int temp = 0, num = i;
            while(num > 0) {
                temp += num % 10;
                num /= 10;
            }
            if (ans.find(temp) == ans.end()) ans.insert(pair<int, int>(temp, 1));
            else ans[temp]++;
        }
        for (auto const& x : ans) max_ = max(x.second, max_);
        return max_;
    }
};