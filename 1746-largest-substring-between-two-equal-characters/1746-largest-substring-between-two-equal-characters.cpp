class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        for (int i = 0; i < s.size() - 1; i++) {        
            size_t found = s.find_last_of(s[i]);
            if (found != string::npos) ans = max(ans, int(found - i - 1));
        }
        return ans;
    }
};