class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for (int i = low; i <= high; i++) {
            int left = 0, right = 0;
            string temp = to_string(i);
            for (int j = 0; temp.size() % 2 == 0 && j < temp.size(); j++) {
                if (j < temp.size() / 2) left += temp[j];
                else right += temp[j];
            }
            if (left != 0 && left == right) cnt++;
        }
        return cnt;
    }
};