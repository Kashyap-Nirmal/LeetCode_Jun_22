class Solution {
    public int addDig(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    public int addDigits(int num) {
        int ans = num;
        while(num > 9) {
            ans = addDig(num);
            num = ans;
        }
        return ans;
    }
}