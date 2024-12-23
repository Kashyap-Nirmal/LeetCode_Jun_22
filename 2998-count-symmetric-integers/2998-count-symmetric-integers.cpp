class Solution {
public:
    bool checkSymmetric(int num) {
        int left = num, right = 0; 
        vector<int> ans;
        while(left > 0) {
            ans.push_back(left % 10);
            left /= 10;
        }
        if (ans.size() % 2 != 0) return false;
        left = 0;
        for (int i = 0; i < ans.size(); i++) {
            if (i < ans.size() / 2) left += ans[i];
            else right += ans[i];
        }
        return left == right;
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for (int i = low; i <= high; i++) cnt += checkSymmetric(i);
        return cnt;
    }
};