class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n, prod = 1, sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            prod *= temp % 10;
            temp = temp / 10;        
        }
        return prod - sum;
    }
};