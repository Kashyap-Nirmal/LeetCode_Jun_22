class Solution {
public:
    int getLucky(string s, int k) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int temp = s[i] - 'a' + 1;
            if (temp <= 9) ans += temp;
            else ans += (temp) % 10 + (temp) / 10;
        }
        for (int i = 0; i < k - 1; i++) {
            int temp = ans;
            ans = 0;
            for (; temp > 0; temp /= 10) ans += temp % 10;
        }
        return ans;
    }
};