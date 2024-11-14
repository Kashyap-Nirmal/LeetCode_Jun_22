class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;        
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) == m.end()) m.insert(pair<int, int>(nums[i], 1));
            else m[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (m[nums[i]] > 1) continue;
            else sum += nums[i];
        }
        return sum;
    }
};