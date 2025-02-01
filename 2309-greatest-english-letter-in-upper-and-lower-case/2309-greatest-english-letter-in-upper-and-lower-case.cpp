class Solution {
public:
    string greatestLetter(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                char target = s[i] - 'a' + 'A';
                if(find(s.begin(), s.end(), target) != s.end()) {
                    string s1(1, target);
                    ans = max(ans, s1);
                }
            } 
        }
        return ans;
    }
};