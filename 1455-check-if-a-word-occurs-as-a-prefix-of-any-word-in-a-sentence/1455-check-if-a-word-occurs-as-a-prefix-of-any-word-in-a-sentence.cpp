class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int cnt = 0;
        string s;
        stringstream ss(sentence); 
        while (getline(ss, s, ' ')) {
            cnt++;
            size_t position = s.find(searchWord);
            if (position != std::string::npos && position == 0) return cnt;
        }
        return -1;
    }
};