class Solution {
public:
    int addDigits(int num) {
        string temp = to_string(num);
        int tem = 0;
        if (temp.size() == 1) return num;
        while(temp.size() != 1) {
            tem = 0;
            for (int i = 0; i < temp.size(); tem += temp[i] - '0', i++);
            temp = to_string(tem);
        }
        return tem;
    }
};