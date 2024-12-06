class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec (n, 0);
        int j = -1 * n / 2;
        for (int i = 0; i < n; i++, j++) {
            if (n % 2 == 1 && i == n / 2) vec[i] = 0;
            else if (i == n / 2) {
                j++;
                vec[i] = j;
            } else vec[i] = j;
        }
        return vec;
    }
};