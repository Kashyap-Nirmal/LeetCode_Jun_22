class Solution {
public:
    int similarPairs(vector<string>& words) {
        int ans = 0;
        vector<vector<int>> freq(words.size(), vector<int>(26, 0));
        for(int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                freq[i][words[i][j] - 'a'] = 1;
            }
        }
        for(int i = 0; i < words.size() - 1; i++) {
            for (int k = i + 1; k < words.size(); k++) {
                bool flag = true;
                for (int j = 0; j < 26 && flag; j++) {
                    if (freq[i][j] == freq[k][j]) continue;
                    else flag = false;
                }
                if (flag) ans++;
            }
            
        }
        return ans;
    }
};