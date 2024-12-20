class Solution {
public:
    bool isVowel(char c) {
        string s(1, c);
        regex b("[aeiou]");
        return regex_match(s, b);
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        for(int i = left; i <= right; i++) {
            if (isVowel(words[i][0]) && isVowel(words[i][words[i].size() - 1])) cnt++;
        }      
        return cnt;  
    }
};