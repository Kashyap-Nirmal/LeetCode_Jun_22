class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            cout << i << " " << s[i] << "\n";
            int temp = s[i];
            find(s.begin() + i, s.end(), '#');
            if ((i + 2) < s.size() && s[i + 2] == '#') {
                cout << s[i] - '0' << "\n\n";
                temp = ((s[i] - '0') * 10) + s[i + 1];              
                i += 2;     
            }            
            ans += 'a' + temp - '0' - 1;
            cout << i << " " << temp << " " << ans << "\n";
        }
        return ans;
    }
};