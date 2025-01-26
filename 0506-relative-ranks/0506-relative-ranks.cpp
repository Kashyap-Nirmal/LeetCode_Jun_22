class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size(), "");
        for (int i = 0; i < score.size(); i++) {
            string arr[3] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
            auto it = max_element(score.begin(), score.end());
            int ind = it - score.begin();
            *it = -1;
            if (i < 3) ans[ind] = arr[i];
            else ans[ind] = to_string(i + 1);
        }
        return ans;
    }
};