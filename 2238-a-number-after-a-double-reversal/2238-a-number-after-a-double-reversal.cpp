class Solution {
public:
    int reverseNumber(int temp) {
        int i = 0, rev = 0;
        while(temp != 0) {
            rev = temp % 10 + rev * 10;
            temp = temp / 10;
            i++;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        return num == reverseNumber(reverseNumber(num));
    }
};