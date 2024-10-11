class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) return 1;
        int ans = -1, temp = 0;        
        for(int i = n - 1; i > 0; i--) {
            temp = 0;
            for (int j = i; j <= n; j++) temp += j;
            if (sumOfN(i) == temp) return i;
        }
        return ans;
    }
    int sumOfN(int n) {
        return n * (n + 1) / 2;
    }
};