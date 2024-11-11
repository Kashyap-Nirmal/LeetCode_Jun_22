class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        bool ans;
        for (int i = 0; i < words.size(); i++) {
            ans = true;
            for (int k = 0; k < words[i].size(); k++) {
                if (!allowed.contains(words[i][k])) {
                    ans = false;
                    break;
                }
            }
            if (ans) cnt++;
        }   
        return cnt;     
    }
};