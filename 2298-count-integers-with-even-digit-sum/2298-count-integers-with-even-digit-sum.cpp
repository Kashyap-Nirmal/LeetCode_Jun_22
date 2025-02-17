
class Solution {

public:

    int countEven(int num) {

        int cnt = 0;

        if (num >= 2) cnt = 1;

        for (int i = 4; i <= num; i++) {

            int temp = 0;

            temp += i % 10;

            temp += (i / 10);

            temp += (i / 100);

            temp += (i / 1000);

            if (temp % 2 == 0) cnt++;            

        }

        return cnt;

    }

};
