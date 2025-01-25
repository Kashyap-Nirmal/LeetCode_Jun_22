class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max_ = 0;
        for (int i = 0; i < strs.size(); i++) {
            bool flag = true;
            for (int j = 0; flag && j < strs[i].size(); j++)
                if (!isdigit(strs[i][j])) flag = false;            
            if (flag) max_ = max(max_, stoi(strs[i]));
            else max_ = max(max_, int(strs[i].size()));                    
        }
        return max_;
    }
};