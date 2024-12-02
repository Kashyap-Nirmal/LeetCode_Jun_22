class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int num = 0;
        for (int i = 0; i < 4; i++) {
            num += pow(10, i) * min(min(num1 % 10, num2 % 10), num3 % 10);
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
        }
        return num;
    }
};