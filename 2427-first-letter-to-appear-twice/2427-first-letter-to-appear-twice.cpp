class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char> ans(26,0);
        for (int i = 0; i < s.size(); i++) {
            int ind = s[i] - 'a';
            ans[ind]++;
            if (ans[ind] == 2) return s[i];
        }
        return 'a';
    }
};