class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) 
            if (letter == s[i]) cnt++;
        return floor(cnt * 1.0 / s.size() * 100);
    }
};