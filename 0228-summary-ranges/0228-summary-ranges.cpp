class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;    
        if (nums.size() == 0) return ans;    
        if (nums.size() == 1) {
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        int p1, p2, i;
        bool flag = false;
        for (i = 0; i < nums.size(); i++) {
            if (!flag)
                p1 = i;
            p2 = i;
            if (i+1 < nums.size() && nums[i] >= 0 && nums[i+1] >= 0 && nums[i+1] - nums[i] == 1) {
                flag = true;
                p2++;
            } else if (i+1 < nums.size() && nums[i+1] < 0 && nums[i] < 0 && abs(abs(nums[i + 1])-abs(nums[i])) == 1) {
                flag = true;
                p2++;
            } else if (i+1 < nums.size() && nums[i] == -1 && nums[i+1] == 0) {
                flag = true;
                p2++;
            } else if(p1 == p2) {
                ans.push_back(to_string(nums[p1]));
                flag = false;
            } else {
                ans.push_back(to_string(nums[p1]) + "->" + to_string(nums[p2]));
                flag = false;
            }
        }
        return ans;
    }
};