class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        vector<int> record;
        for (int i = 0; i < operations.size(); i++) {
            switch(operations[i][0]) {
                case 'C' :
                    record.pop_back();
                    break;
                case 'D' :
                    record.push_back(record.back() * 2);
                    break;
                case '+' :
                    record.push_back(record.back() + record[record.size() - 2]);
                    break;                    
                default :
                    record.push_back(stoi(operations[i]));
                    break;
            }
        }
        for (int i = 0; i < record.size(); i++) sum += record[i];
        return sum;
    }
};