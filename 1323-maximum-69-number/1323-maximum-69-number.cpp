class Solution {
public:
    int maximum69Number (int num) {
        int temp = num, sixp = 0;
        for (int i = 0; temp > 0; i++, temp /= 10) 
            if (temp % 10 == 6) sixp = i;
        if (sixp == 0 && num % 10 == 9)
        return num;
        num += 3 * pow(10, sixp);
        return num;
    }
};