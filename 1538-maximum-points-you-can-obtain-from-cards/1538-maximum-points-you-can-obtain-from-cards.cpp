class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // https://www.youtube.com/watch?v=pBWCOCS636U&list=PLgUwDviBIf0q7vrFA_HEWcqRqMpCXzYAL
        int lSum = 0, rSum = 0, maxSum = 0;
        int lPtr = k - 1, rPtr = cardPoints.size() - 1;
        for (int i = 0; i <= k - 1; i++) {
            lSum += cardPoints[i];
        }
        maxSum = lSum;
        for (int i = k - 1; i >= 0; i--) {
            lSum -= cardPoints[i];
            rSum += cardPoints[rPtr];
            rPtr--;            
            maxSum = max(maxSum, lSum + rSum);
        }
        return maxSum;
    }
};