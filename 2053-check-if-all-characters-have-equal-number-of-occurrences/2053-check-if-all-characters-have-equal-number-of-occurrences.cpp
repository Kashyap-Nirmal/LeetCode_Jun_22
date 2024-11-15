class Solution {
public:
    bool areOccurrencesEqual(string s) {
        bool ans = true;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) == m.end()) m.insert(pair<char, int>(s[i], 1));
            else m[s[i]]++;
        }
        map<char, int>:: iterator it = m.begin();
        for (int i = 0; i < (m.size() - 1); i++) {            
            int temp = it -> second;
            it++;
            if (temp != it -> second) return false;
        } 
        return ans;
    }
};