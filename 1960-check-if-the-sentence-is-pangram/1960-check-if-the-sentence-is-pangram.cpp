class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26) return false;
        for (int i = 0; i < 26; i++) {
            if (find(sentence.begin(), sentence.end(), 'a' + i) == sentence.end()) return false;
        }
        return true;
    }
};