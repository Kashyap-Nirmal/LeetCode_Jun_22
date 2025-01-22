class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for (int i = 0; i < words.size() - 1; i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (words[i].find(words[j]) != string::npos && find(ans.begin(), ans.end(), words[j]) == ans.end()) ans.push_back(words[j]);
                else if (words[j].find(words[i]) != string::npos && find(ans.begin(), ans.end(), words[i]) == ans.end()) ans.push_back(words[i]);
            }
        }
        return ans;
    }
};