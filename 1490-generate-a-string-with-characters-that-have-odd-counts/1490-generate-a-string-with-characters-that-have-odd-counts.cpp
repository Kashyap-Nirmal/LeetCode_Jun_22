class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (n % 2 == 0 && i == 0) {
                ans += 'a' + 1; 
                continue;
            } 
            ans += 'a';
        }
        return ans;
    }
};