class Solution {
public:
    int countEven(int num) {
        int cnt = 0;
        if (num >= 2) cnt = 1;
        for (int i = 4; i <= num; i++) {
            string stri = to_string(i);
            int temp = 0;
            for(int j = 0; j < stri.size(); temp += (stri[j] - '0'), j++);
            if (temp % 2 == 0) cnt++;            
        }
        return cnt;
    }
};