class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans = 0;
        map<string, int> freq1, freq2;
        for (int i = 0; i < words1.size(); i++) {
            if (freq1.find(words1[i]) == freq1.end())
                freq1.insert(pair<string, int>(words1[i], 1));
            else 
                freq1[words1[i]]++;
        }
        for (int i = 0; i < words2.size(); i++) {
            if (freq2.find(words2[i]) == freq2.end())
                freq2.insert(pair<string, int>(words2[i], 1));
            else
                freq2[words2[i]]++;
        }
        for (auto& it: freq1) {
            if (it.second != 1) continue;
            else if (freq2[it.first] == 1) {
                ans++;
                freq2[it.first] = 0;
            }
        }
        for (auto& it: freq2) {
            if (it.second != 1) continue;
            else if (freq1[it.first] == 1) ans++;
        }
        return ans;
    }
};