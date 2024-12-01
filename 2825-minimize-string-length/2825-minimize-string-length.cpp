class Solution {
public:
    int minimizedStringLength(string s) {
        for (int i = 0; i < 26; i++) {
            auto it = find(s.begin(), s.end(), 'a' + i), it1 = it;
            for (int j = it1 - s.begin(); it1 != s.end() && j < s.size(); ) {
                it1 = find(it + 1, s.end(), 'a' + i);                
                if (it1 != s.end()) s.erase(it1);            
            }            
        }
        return s.size();
    }
};