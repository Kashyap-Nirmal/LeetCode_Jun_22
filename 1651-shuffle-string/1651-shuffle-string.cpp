class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string sCopy = s;
        for(int i = 0; i < s.length(); i++) sCopy[indices[i]] = s[i];
        return sCopy;
    }
};