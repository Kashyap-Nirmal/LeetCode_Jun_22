class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minDiff = INT_MAX;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() -1; i++) {
            minDiff = min(minDiff, abs(arr[i] - arr[i + 1]));
        }
        vector<vector<int>> ans;
        for (int i = 0; i < arr.size() -1; i++) {
            int j = i + 1;
            vector<int> temp (2, 0);
            if (arr[j] - arr[i] == minDiff) {
                temp[0] = arr[i];
                temp[1] = arr[j];
                ans.push_back(temp);
            } 
        }
        return ans;
    }
};