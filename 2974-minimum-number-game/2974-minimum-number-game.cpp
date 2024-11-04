class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        int temp = 0, temp1 = 0;
        for (int i = 0; i < nums.size() / 2; i++) {
            temp = *min_element(nums.begin(), nums.end());
            *find(nums.begin(), nums.end(), temp) = 101;
            temp1 = *min_element(nums.begin(), nums.end());
            *find(nums.begin(), nums.end(), temp1) = 101;
            ans.push_back(temp1);
            ans.push_back(temp);
        }
        return ans;
    }
};