class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ans = 0, temp = x;        
        while(x > 0) {
            ans += x % 10;
            x /= 10;
        }
        if (temp % ans == 0) return ans;
        else return -1;
    }
};