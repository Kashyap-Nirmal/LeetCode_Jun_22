class Solution {
public:
    string toLowerCase(string s) {
        for(int k = 0; k < s.size(); k++) 
            if (s[k] >= 'A' && s[k] <= 'A' + 25) s[k] = 'a' + s[k] - 'A'; 
        return s;
    }
};