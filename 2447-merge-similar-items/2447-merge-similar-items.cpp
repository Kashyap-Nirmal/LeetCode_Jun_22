class Solution {
public:
    bool static compareVectors(const std::vector<int>& v1, const std::vector<int>& v2) {
        return v1[0] < v2[0];
    }
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        for (int i = 0; i < items2.size(); i++) {
            int x = items2[i][0];
            auto it = find_if(begin(items1), end(items1), [&x] (vector<int> const &target) {
        return target[0] == x;
    }); 
            if (it != end(items1)) 
                items1[it - items1.begin()][1] += items2[i][1];
            else 
                items1.push_back(items2[i]);
        }
        
        sort(items1.begin(), items1.end(), compareVectors);
        
        return items1;
    }
};