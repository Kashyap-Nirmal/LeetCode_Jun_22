class Solution {
    public int digitSum(int num) {
        int sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    public int countEven(int num) {
        int ans = 0;
        for (int i = 2; i <= num; i++) {
            if(digitSum(i) % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
}