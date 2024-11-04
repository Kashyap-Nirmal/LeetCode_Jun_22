class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) 
            if ( find(words.begin() + i + 1, words.end(), string(words[i].rbegin(), words[i].rend())) != words.end()) cnt++;
        return cnt;
    }
};