class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1 = 0, ans2 = 0;
        vector <int> ans(2,0);
        for (int i = 0; i < nums1.size(); i++)
            for (int j = 0; j < nums2.size(); j++)
                if (nums2[j] == nums1[i]) {
                    ans1++;
                    break;
                }
        for (int i = 0; i < nums2.size(); i++)
            for (int j = 0; j < nums1.size(); j++)
                if (nums2[i] == nums1[j]) {
                    ans2++; 
                    break;
                }
        ans[0] = ans1;
        ans[1] = ans2;
        return ans;
    }
};