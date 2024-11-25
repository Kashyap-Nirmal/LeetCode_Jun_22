class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        for (int i = 0, temp = 1; i < n; i++, temp++) {
            if (i % 7 == 0) temp = i / 7 + 1;
            sum += temp;
        }
        return sum;
    }
};