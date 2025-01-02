class Solution {
public:
    static bool cmp (pair<int, string>&a, pair<int, string>&b) {
        return a.first < b.first;
    }
    string sortSentence(string s) {
        map<int, string> mapp;
        string ans;

        stringstream ss(s);
        string word;
        while (ss >> word) 
            mapp.insert(pair<int, string>{word[word.size() - 1], word.substr(0, word.size() - 1)});
        
        vector<pair<int, string>> A; 
        for (auto& it : mapp) A.push_back(it); 
    
        sort(A.begin(), A.end(), cmp); 
        for (auto& it : A) ans += it.second + " ";
        
        ans = ans.substr(0, ans.size() - 1);
        return ans;
    }
};