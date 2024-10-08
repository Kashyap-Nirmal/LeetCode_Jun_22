class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        for (int i = 0; i < items.size(); i++) {
            if (ruleKey == "type" && items[i][0] == ruleValue) ans++; 
            else if (ruleKey == "color" && items[i][1] == ruleValue) ans++;
            else if (ruleKey == "name" && items[i][2] == ruleValue) ans++;
        }
        return ans;
    }
};