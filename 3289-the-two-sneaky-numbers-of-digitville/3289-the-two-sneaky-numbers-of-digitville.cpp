class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        int i = nums.size() - 2;
        int arr[i];
        for (int j = 0; j < i; j++) arr[j] = 0;
        for (int j = 0; j < nums.size(); j++) arr[nums[j]]++;
        for (int j = 0; j < i; j++) {
            cout << i << " " << arr[j] << "\n";
            if (arr[j] == 2)
                ans.push_back(j);    
        }
        return ans;
    }
};