class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            int temp = s[i];
            if ((i + 2) < s.size() && s[i + 2] == '#') {
                temp = ((s[i] - '0') * 10) + s[i + 1];              
                i += 2;     
            }            
            ans += 'a' + temp - '0' - 1;
        }
        return ans;
    }
};