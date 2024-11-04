class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt = 0;
        for(int i = 0; i < nums.size() - 2; i++) {
            vector<int>::iterator iter = find(nums.begin() + i, nums.end() - 1, nums[i] + diff);
            if (iter != nums.end()) iter = find(iter + 1, nums.end(), *iter + diff);                
            if (iter != nums.end()) cnt++; 
        }
        return cnt++;
    }
};