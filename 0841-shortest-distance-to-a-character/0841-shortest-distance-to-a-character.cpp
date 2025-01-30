class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.size(), 0);
        vector<int> ind;
        for (int i = 0; i < s.size(); i++) {
            auto it = find(s.begin() + i, s.end(), c);
            if (it != s.end()) {
                int temp = it - s.begin();
                ind.push_back(temp);
                i = temp;
            }
        }
        for (int i = 0, j = 0; i < ans.size(); i++) {
            if (s[i] == c) {
                if (j != ind.size() - 1) j++;
                ans[i] = 0;
                continue;
            }
            if (j - 1 >= 0 && j < ind.size()) {
                ans[i] = min(abs(ind[j] - i), abs(ind[j - 1] - i));
                if (j + 1 < ind.size())
                    ans[i] = min(ans[i], abs(ind[j + 1] - i));
            }                
            else if (j < ind.size())
                ans[i] = abs(ind[j] - i);
        }
        return ans;
    }
};