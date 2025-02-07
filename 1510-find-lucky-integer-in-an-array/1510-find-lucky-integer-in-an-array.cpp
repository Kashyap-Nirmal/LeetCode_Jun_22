class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        int freq[500] = {0};
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i] - 1]++;
            if (i + 1 != arr.size() && arr[i] != arr[i + 1] && freq[arr[i] - 1] == arr[i]) ans = max(ans, arr[i]);
        }
        int i = arr.size() - 1;
        if (freq[arr[i] - 1] == arr[i]) ans = max(ans, arr[i]);
        return ans;
    }
};