class Solution {
public:
    vector<int> findDiff(vector<int> nums1, vector<int> nums2) {
        set<int> temp;
        for (int i = 0; i < nums1.size(); i++) {
            if (find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end())
                temp.insert(nums1[i]);
        }
        return vector<int> (temp.begin(), temp.end());
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        return {findDiff(nums1, nums2), findDiff(nums2, nums1)};
    }
};