class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max_ = 0;
        for (int i = 0; i < strs.size(); i++) {
            if (isdigit(*max_element(strs[i].begin(), strs[i].end())))
                max_ = max(max_, stoi(strs[i]));
            else 
                max_ = max(max_, int(strs[i].size()));                    
        }
        return max_;
    }
};