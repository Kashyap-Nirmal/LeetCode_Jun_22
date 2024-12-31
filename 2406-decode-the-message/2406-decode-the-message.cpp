class Solution {
public:
    string decodeMessage(string key, string message) {
        map<int, int> ans;
        int cnt = 0, it = 0;
        string s = "";
        for(int i = 0; i < 26; i++) {
            ans.insert(pair<int, int>(i, 0));
            if (cnt == 0 && key[i] != ' ') {
                ans[key[i] - 'a'] = cnt;
                cnt++;
                it = i + 1;                
            } 
        }              
        for (int i = it; i < key.size() || cnt < 27; i++) {
            if (key[i] == ' ') continue;
            if (ans[key[i] - 'a'] == 0 && key[i] != key[it - 1]) {
                ans[key[i] - 'a'] = cnt;                            
                cout << key[i] << " " << char('a' + ans[key[i] - 'a']) << "\n"; 
                cnt++;
            }                            
        }
        for (auto& x: ans) 
            cout << char('a'+ x.first) << " -> " << char('a' + x.second) << "\n";
        for (int i = 0; i < message.size(); i++) {
            if (message[i] == ' ') {
                s += ' ';
                continue;
            }
            s += ans[message[i] - 'a'] + 'a';
        }
        return s;
    }
};