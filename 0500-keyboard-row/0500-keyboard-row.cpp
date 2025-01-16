class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string keyboardRows[] = { "[qwertyuiop]", "[asdfghjkl]", "[zxcvbnm]" };
        vector<string> ans;
        for (int i = 0; i < words.size(); i++) {
            int temp = -1;
            string sT = words[i];
            for(int j = 0; temp != -2, j < words[i].size(); j++) {
                transform(words[i].begin(), words[i].end(), words[i].begin(), ::tolower);
                if ((temp == -1 || temp == 0) && find(keyboardRows[0].begin(), keyboardRows[0].end(), words[i][j]) != keyboardRows[0].end()) {
                    temp = 0;
                } else if ((temp == -1 || temp == 1) && find(keyboardRows[1].begin(), keyboardRows[1].end(), words[i][j]) != keyboardRows[1].end()) {
                    temp = 1;
                } else if ((temp == -1 || temp == 2) && find(keyboardRows[2].begin(), keyboardRows[2].end(), words[i][j])  != keyboardRows[2].end())   {
                    temp = 2;
                } else if (temp != -1) {
                    temp = -2;
                }
            }
            if (temp != -2) {
                ans.push_back(sT);
            }
        }
        return ans;
    }
};