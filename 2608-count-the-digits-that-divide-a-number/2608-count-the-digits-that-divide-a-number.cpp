class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        for (int temp = num; temp > 0; temp /= 10)
            if ( num % (temp % 10) == 0) ans++;
        return ans;
    }
};