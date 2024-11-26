class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) 
    { 
        return a.second < b.second; 
    } 
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freq;
        for (int i = 0; i < arr.size(); i++) {
            if (freq.find(arr[i]) == freq.end()) freq.insert(pair<int, int>(arr[i], 1));
            else freq[arr[i]]++;
        }
        vector<pair<int, int>> v (freq.begin(), freq.end());
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < v.size(); i++) {
            int temp = v[i].second;
            if (find_if(v.begin() + i + 1, v.end(), [temp](const auto& p) { return p.second == temp; }) != v.end()) return false;
        }
        return true;
    }
};