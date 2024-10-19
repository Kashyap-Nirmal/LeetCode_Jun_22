class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int arr[4] = {10001, 10001 , 0 , 0};
        for (int i = 0; i < 2; i++) {
            int temp = 0;
            for(int j = 0; j < nums.size(); j++) {
                if (min(arr[i], nums[j]) == nums[j]) {
                    temp = j;
                    arr[i] = min(arr[i], nums[j]);
                }
            }
            nums[temp] = 10001;
        }        
        for (int i = 2; i < 4; i++) {
            int temp = 0;
            for(int j = 0; j < nums.size(); j++) {
                if (nums[j] != 10001 && max(arr[i], nums[j]) == nums[j]) {
                    temp = j;
                    arr[i] = max(arr[i], nums[j]);
                }
            }
            nums[temp] = 0;
        }        
        return (arr[3] * arr[2]) - (arr[1] * arr[0]);
    }    
};