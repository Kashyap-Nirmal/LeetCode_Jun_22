class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> src, all;
        for (int i = 0; i < paths.size(); i++) {
            all.insert(paths[i][0]);
            all.insert(paths[i][1]);
            src.insert(paths[i][0]);
        }
        for (auto i : all) 
            if (find(src.begin(), src.end(), i) == src.end()) return i;
        return "";
    }
};