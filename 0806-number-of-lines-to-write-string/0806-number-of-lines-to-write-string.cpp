class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> ans(2, 0);
        ans[0]++;
        //  && i != s.size() - 1
        for (int i = 0; i < s.size(); i++) {            
            int temp = widths[s[i] - 'a'] ;
            if (ans[1] >= 100) {
                ans[0]++;
                ans[1] = 0;
            }
            if (ans[1] + temp <= 100) {
                ans[1] += temp;
            } else {
                ans[0]++;
                ans[1] = temp;
            }
        }        
        return ans;
    }
};