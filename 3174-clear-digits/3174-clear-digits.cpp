class Solution {
public:
    string clearDigits(string s) {
        string ans = "";        
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {            
            if (s[i] >= '0' && s[i] <= '9') {
                for (int j = i - 1; j > -1; j--) {
                    if (s[j] == 'A') continue;
                    if (s[j] >= 'a' && s[j] <= 'z') {
                        s[j] = 'A';
                        break;
                    }
                }                
                s[i] = 'A';
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') continue;
            ans += s[i];
        }
        return ans;
    }
};