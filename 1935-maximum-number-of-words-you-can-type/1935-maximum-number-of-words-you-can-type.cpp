class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt = 0;
        stringstream ss(text);
        string word;
        while (!ss.eof()) {
            getline(ss, word, ' ');
            cnt++;
            for (int j = 0; j < brokenLetters.size(); j++) {
                auto it = find(word.begin(), word.end(), brokenLetters[j]);
                if (it != word.end()) {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};