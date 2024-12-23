class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for (int i = low; i <= high; i++) {
            int left = 0, right = 0;
            string temp = to_string(i);
            for (int j = 0; temp.size() % 2 == 0 && j < temp.size() / 2; j++) {
                left += temp[j];
                right += temp[temp.size() / 2 + j];
            }
            if (left != 0 && left == right) cnt++;
        }
        return cnt;
    }
};