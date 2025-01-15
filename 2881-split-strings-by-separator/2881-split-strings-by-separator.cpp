class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++) {
            stringstream ss(words[i]);
            string t;
            while (getline(ss, t, separator)) {
                if (t != "")
                    ans.push_back(t);
            }   
        }
        return ans;
    }
};