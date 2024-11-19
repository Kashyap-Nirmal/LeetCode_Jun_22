class Solution {
public:
    string removeTrailingZeros(string num) {
        string temp = num;
        for (int i = 0; i < num.size(); i++) {
            if (num[num.size() - i - 1] == '0') temp.erase(num.size() - i - 1);
            else break;
        }
        return temp;
    }
};