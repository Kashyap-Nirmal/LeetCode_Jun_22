class Solution {
public:
    void func(set<int> &s, map<int, int> &m) {
        for (auto i : s) {
            if (m.find(i) == m.end()) m.insert({i, 0});
            else m[i]++;
        }
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int, int> m;
        set<int> s;
        vector<int> vec;
        copy(nums1.begin(), nums1.end(), inserter(s,s.end()));
        func(s, m);
        s.clear();
        copy(nums2.begin(), nums2.end(), inserter(s,s.end()));
        func(s, m);
        s.clear();
        copy(nums3.begin(), nums3.end(), inserter(s,s.end()));
        func(s, m);
        for (auto i : m) 
            if (i.second >= 1) vec.push_back(i.first);
        return vec;
    }
};