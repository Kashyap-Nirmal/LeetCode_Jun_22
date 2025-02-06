class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        string nn = to_string(n);
        for (int i = 0; i < nn.size(); i++) {            
            if (i % 2 == 0) ans += nn[i] - '0';
            else ans += (-1) * (nn[i] - '0');
        }
        return ans;
    }
};