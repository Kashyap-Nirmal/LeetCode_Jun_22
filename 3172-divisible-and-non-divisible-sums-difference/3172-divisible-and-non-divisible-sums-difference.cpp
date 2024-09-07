class Solution {
public:
    int differenceOfSums(int n, int m) {
        int arr[n], num1 = 0, num2 = 0;
        for (int i = 1; i < n + 1; i++) arr[i - 1] = i;
        for (int i = 0; i < n; i++) {
            if (arr[i] % m != 0) num1 += arr[i];
            if (arr[i] % m == 0) num2 += arr[i];
        }
        return num1 - num2;
    }
};