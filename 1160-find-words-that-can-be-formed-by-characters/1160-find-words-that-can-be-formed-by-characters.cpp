class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            string temp = chars; 
            for (int j = 0; flag && j < words[i].size(); j++) { 
                auto it = find(chars.begin(), chars.end(), words[i][j]);
                if (it == chars.end()) flag = false;
                else *it = '0';
            }
            if (flag) ans += words[i].size();
            chars = temp;
        }
        return ans;
    }
};