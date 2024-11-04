class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for (int p1 = 0 , p2 = s.size() - 1; p2 >= p1; p1++, p2--) {
            if (s[p1] > s[p2]) s[p1] = s[p2];
            else if (s[p1] < s[p2]) s[p2] = s[p1];
        }
        return s;
    }
};