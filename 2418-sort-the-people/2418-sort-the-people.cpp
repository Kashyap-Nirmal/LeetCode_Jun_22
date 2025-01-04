class Solution {
public:
    static bool cmp(pair<int, string>& a, pair<int, string>& b) { 
        return a.first > b.first; 
    } 
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> ans;
        for (int i = 0; i < names.size(); i++) 
            ans.insert(pair<int, string>{heights[i], names[i]});

        vector<pair<int, string> > A;  
        for (auto& it : ans) A.push_back(it); 
        sort(A.begin(), A.end(), cmp); 

        vector<string> vec;
        for (auto& it : A) vec.push_back(it.second); 
        return vec;
    }
};