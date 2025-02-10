class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        for (int i = 0, dist = 100000000, ind = 100000; i < points.size(); i++) {
            int temp = abs(points[i][0] - x) + abs(points[i][1] - y);
            if ((points[i][0] == x || points[i][1] == y) && dist > temp) {
                ind = i;
                dist = min(dist, temp);
            }
            if (i == points.size() - 1 && ind == 100000) return -1;
            else if (i == points.size() - 1) return ind; 
        }
        return 0;
    }
};