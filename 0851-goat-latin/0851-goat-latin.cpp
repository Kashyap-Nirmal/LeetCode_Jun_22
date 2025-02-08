class Solution {
public:
    string convertGoatLatin(string s, int i) {
        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u' || s[0] == 'A' || s[0] == 'E' || s[0] == 'I' || s[0] == 'O' || s[0] == 'U') {
            s += "ma";
        } else {
            s = s.substr(1, s.size() - 1) + s[0] + "ma";
        }
        if (i > 0) {
            for (int j = 0; j < i; j++) s += 'a';
        }
        return s;
    }
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, ans = "";
        int i = 1;
        while(getline(ss, word, ' ')) {
            ans += convertGoatLatin(word, i);
            ans += ' ';
            i++;
        }
        ans = ans.substr(0, ans.size() - 1);
        return ans;
    }
};