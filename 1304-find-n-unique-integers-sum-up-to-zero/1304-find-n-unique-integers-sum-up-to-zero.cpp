class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec (n, 0);
        for (int i = 0, j = -1 * n / 2; i < n; i++, j++) {
            if (i == n / 2 && n % 2 == 0) j++;
            vec[i] = j;
        }
        return vec;
    }
};