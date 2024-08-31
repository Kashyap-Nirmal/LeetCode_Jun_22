#include<string>

class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        int temp = 0;
        bool pos = true;
        string s_temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && s_temp.length() == 0) continue;
            else if (s[i] == '0' && s_temp.length() == '0') continue;
            else if (s[i] == '+' && s_temp.length() == 0 ) s_temp += s[i];
            else if (s[i] == '-' && s_temp.length() == 0) s_temp += s[i];
            else if (s[i] == '.' && s_temp.length() > 0) s_temp += s[i];
            else if (s[i] > 47 && s[i] < 58) s_temp += s[i];
            else break;
        }

        cout<< s_temp;

        if (s_temp.length() == 1 && (s_temp[0] == '-' || s_temp[0] == '+')) {
            cout<<" Here";
            return ans;
        }

        if (s_temp[0] == '-') pos = false;

        if (!s_temp.contains('.') && s_temp != "") {
            if (s_temp[0] == '-' && s_temp.length() > 1) ans = INT_MIN;
            else ans = INT_MAX;

            try {
                temp = stoi(s_temp);
                ans = temp;
            } catch (...) {
                return ans;
            }
        }   

        if (s_temp.contains(".")) {
            temp = stoi(s_temp);
            ans = temp;
        }

        return ans;
    }
};