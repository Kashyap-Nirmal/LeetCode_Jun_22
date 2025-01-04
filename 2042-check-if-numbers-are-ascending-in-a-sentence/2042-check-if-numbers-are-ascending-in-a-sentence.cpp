class Solution {
public:
    bool areNumbersAscending(string s) {
        bool ans = true;
        vector<int> vec;
        int temp = -1;
        for(int i = 0; i < s.size(); i++) {
            if (temp == - 1 && s[i] >= '0' && s[i] <= '9') temp = i;
            if (temp != -1 && (s[i] == ' ' || i == s.size() - 1)) {
                vec.push_back(std::stoi(s.substr(temp, i)));
                temp = -1;
            }
        }
        for (int i = 0; i < vec.size() - 1; i++)
            if (vec[i] >= vec[i + 1]) return false;
        return ans;
    }
};