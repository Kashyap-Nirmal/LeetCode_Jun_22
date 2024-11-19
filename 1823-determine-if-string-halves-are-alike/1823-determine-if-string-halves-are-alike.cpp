class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1 = 0, cnt2 = 0;
        regex vowel("[aeiouAEIOU]+");
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() / 2 &&  regex_match(format("{}", s[i]), vowel)) cnt1++;
            else if (i >= s.size() / 2 &&  regex_match(format("{}", s[i]), vowel)) cnt2++;
        }
        return cnt1 == cnt2;
    }
};