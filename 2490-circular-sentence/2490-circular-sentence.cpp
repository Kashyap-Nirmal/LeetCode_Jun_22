class Solution {
public:
    bool isCircularSentence(string sentence) {
        bool ans = true;
        if (sentence[sentence.size() - 1] != sentence[0]) return false;
        stringstream ss(sentence);
        string word;
        getline(ss, word, ' ');
        string prev = word;
        while (!ss.eof()) {
            getline(ss, word, ' ');
            if (prev[prev.size() - 1] == word[0]) {
                prev = word;
            } else return false;
        }
        return ans;
    }
};