class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {        
        if (words.size() != s.size()) return false;
        string temp = "";
        for (int i = 0; i < words.size(); i++) {
            temp += words[i][0];
            if (!s.contains(temp)) return false;
        }
        return true;
    }
};